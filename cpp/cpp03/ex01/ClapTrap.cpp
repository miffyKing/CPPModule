
#include "ClapTrap.hpp"
#include <iostream>
#include <iomanip>

ClapTrap::ClapTrap(void)
{
  std::cout << "Created ClapTrap name is Unknown"
            << "\n";
  this->name_ = "Unknown";
  this->healthPoint_ = 10;
  this->energyPoint_ = 10;
  this->attackDamage_ = 0;
}

ClapTrap::ClapTrap(std::string name)
{
  std::cout << "Created ClapTrap name is " << name << "\n";
  this->name_ = name;
  this->healthPoint_ = 10;
  this->energyPoint_ = 10;
  this->attackDamage_ = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
  std::cout << "copy constructor for ClapTrap\n";
  *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
  this->name_ = ref.getName();
  this->healthPoint_ = ref.getHealthPoint();
  this->energyPoint_ = ref.getEnergyPoint();
  this->attackDamage_ = ref.getDamage();
  return *this;
}

ClapTrap::~ClapTrap()
{
  std::cout <<"ClapTrap " << this->name_ << " Destructor called\n";
}

std::string ClapTrap::getName() const
{
  return this->name_;
}

int ClapTrap::getHealthPoint() const
{
  return this->healthPoint_;
}

int ClapTrap::getEnergyPoint() const
{
  return this->energyPoint_;
}

int ClapTrap::getDamage() const
{
  return this->attackDamage_;
}

void ClapTrap:: setName(const std::string name)
{
  this->name_ = name;
}

void ClapTrap:: setHealthPoint(const int healthpoint)
{
  this->healthPoint_ = healthpoint;
}

void ClapTrap:: setEnergyPoint(const int energypoint)
{
  this->energyPoint_ = energypoint;
}

void ClapTrap:: setDamage(const int damage)
{
  this->attackDamage_ = damage;
}

void ClapTrap::attack(const std::string &target)
{
  if (checkStatus() != 1)
  {
    std::cout<< "can't attack \n";
    showStats();
    return ;
  }
  this->energyPoint_--;
  std::cout << "ClapTrap " << this->name_ << " attacks " << target << ", causing " << this->attackDamage_ << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (checkStatus() == 2)
  {
    std::cout<< " damaged fail : ";
    showStats();
    return;
  }
  if (healthPoint_ < amount)
  {
    healthPoint_ = 0;
  }
  else
  {
    this->healthPoint_ -= amount;
  // 죽은 경우는..?
    std::cout << this->name_ << " is attacked and damaged by " << amount << ", has points left by "
     << this->healthPoint_ << "\n";
  }
  // take damage 예외처리 할 것.point 가 데미지보다 적게 남았으면 그냥 맞기만 할 수 없지. 죽는경우도 있을 수 있다.
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (checkStatus() != 1)
  {
    std::cout<<"Repair fail : ";
    showStats();
    return ;
  }
  this->energyPoint_--;
  this->healthPoint_ += amount;
  std::cout << this->name_ << " has repaired it self by " << amount << ", and now point is " << this->healthPoint_ << "\n";
}


void ClapTrap::showStats()
{
  std::cout << "\n=================================================================\n";
  std::cout << std::right << std::setw(15) << "name";
  std::cout << std::right << std::setw(15) << "hit";
  std::cout << std::right << std::setw(15) << "energy point";
  std::cout << std::right << std::setw(15) << "attack";
  std::cout << "\n";
  std::cout << std::right << std::setw(15) << this->name_;
  std::cout << std::right << std::setw(15) << this->healthPoint_;
  std::cout << std::right << std::setw(15) << this->energyPoint_;
  std::cout << std::right << std::setw(15) << this->attackDamage_;
  std::cout << "\n=================================================================\n\n";
}

int ClapTrap::checkStatus()
{
  if (healthPoint_ <= 0)
  {
    return 2;
  } 
  else if (energyPoint_ <= 0)
  {
    return 3;
  }
  return 1;
}