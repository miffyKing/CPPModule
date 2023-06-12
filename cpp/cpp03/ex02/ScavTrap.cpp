#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap")
{
  std::cout << "Scavtrap default is Created\n";
  this->healthPoint_ = 100;
  this->energyPoint_ = 50;
  this->attackDamage_ = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
  std::cout << "Scavtrap " << name << " is Created\n";
  this->healthPoint_ = 100;
  this->energyPoint_ = 50;
  this->attackDamage_ = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
  std::cout << "Scavtrap copy constructor called";
  this->name_ = scavTrap.getName();
  this->healthPoint_ = scavTrap.getHealthPoint();
  this->energyPoint_ = scavTrap.getEnergyPoint();
  this->attackDamage_ = scavTrap.getDamage();
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
  std::cout << "ScavTrap operator= " << scavTrap.getName() << " called." << std::endl;
  if (this != &scavTrap)
  {
    this->name_ = scavTrap.getName();
    this->healthPoint_ = scavTrap.getHealthPoint();
    this->energyPoint_ = scavTrap.getEnergyPoint();
    this->attackDamage_ = scavTrap.getDamage();
  }
  return *this;
}

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap " << this->name_ << " Destructor called.\n";
}

void ScavTrap::attack(const std::string &target)
{
  if (checkStatus() != 1)
  {
    std::cout << "can't attack \n";
    showStats();
    return;
  }
  this->energyPoint_--;
  std::cout << "ScavTrap " << this->name_ << " attacks " << target << ", causing " << this->attackDamage_ << " points of damage!\n";
}

void ScavTrap::guardGate()
{
  if (checkStatus() != 1)
  {
    std::cout << "Guard Fail : ";
    showStats();
    return;
  }
  this->energyPoint_--;
  std::cout << "["
            << "ScavTrap"
            << "] " << name_
            << " is now in Gate keeper mode" << std::endl;
}