#ifndef FRAG_H
#define FRAG_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
  FragTrap(void);
  FragTrap(const std::string name);
  FragTrap(const FragTrap &copy);
  FragTrap &operator=(const FragTrap &ref);
  virtual ~FragTrap();

  void highFivesGuys(void);

};

#endif