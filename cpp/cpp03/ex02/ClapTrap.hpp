#ifndef CLAP_H
#define CLAP_H

#include <iostream>

class ClapTrap
{

protected:
  std::string name_;
  unsigned int healthPoint_;
  unsigned int energyPoint_;
  unsigned int attackDamage_;

public:
  ClapTrap(void);
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap &clap);
  ClapTrap &operator=(const ClapTrap &ref);
  virtual ~ClapTrap();

  std::string getName() const;
  int getHealthPoint() const;
  int getEnergyPoint() const;
  int getDamage() const;

  void setName(const std::string name);
  void setHealthPoint(const int hp);
  void setEnergyPoint(const int ep);
  void setDamage(const int damage);

  virtual void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void showStats();

  int checkStatus();
};

#endif