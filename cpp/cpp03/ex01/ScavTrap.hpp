#ifndef SCAV_H
#define SCAV_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
  ScavTrap(void);
  ScavTrap(const std::string name);
  ScavTrap(const ScavTrap &copy);
  ScavTrap &operator=(const ScavTrap &ref);
  virtual ~ScavTrap();

  virtual void attack(const std::string &target);
  void guardGate();

};

#endif