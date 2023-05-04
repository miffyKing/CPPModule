#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
  private:
    Weapon &weapon_;
    std::string name_;

  public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void attack(void);
};

#endif