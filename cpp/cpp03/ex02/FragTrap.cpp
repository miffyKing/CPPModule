#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FragTrap")
{
  std::cout << "Fragtrap default is Created\n";
  this->healthPoint_ = 100;
  this->energyPoint_ = 100;
  this->attackDamage_ = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
  std::cout << "Fragtrap " << name << " is Created\n";
  this->healthPoint_ = 100;
  this->energyPoint_ = 100;
  this->attackDamage_ = 30;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
  std::cout << "fragtrap copy constructor called";
  this->name_ = fragTrap.getName();
  this->healthPoint_ = fragTrap.getHealthPoint();
  this->energyPoint_ = fragTrap.getEnergyPoint();
  this->attackDamage_ = fragTrap.getDamage();
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
  std::cout << "FragTrap operator= " << fragTrap.getName() << " called." << std::endl;
  if (this != &fragTrap)
  {
    this->name_ = fragTrap.getName();
    this->healthPoint_ = fragTrap.getHealthPoint();
    this->energyPoint_ = fragTrap.getEnergyPoint();
    this->attackDamage_ = fragTrap.getDamage();
  }
  return *this;
}

FragTrap::~FragTrap()
{
  std::cout << "FragTrap " << this->name_ << " Destructor called.\n";
}

void FragTrap::highFivesGuys(void)
{
  if (checkStatus() != 1)
  {
    std::cout << "can't high five \n";
    showStats();
    return;
  }
  std::cout<< " FragTrap " << this->name_ << " high five \n";
  this->energyPoint_--; 
}