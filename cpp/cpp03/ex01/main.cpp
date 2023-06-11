#include <iostream>

#include "ScavTrap.hpp"
int main()
{

  ScavTrap s1("bcho");
  ScavTrap s2("dayun");
  ClapTrap c3("yunique");

  std::cout << " ===============================\n";
  s1.attack(c3.getName());
  c3.takeDamage(s1.getDamage());

  s1.showStats();
  c3.showStats();

  std::cout<< "===================================\n";
  s2.attack(s1.getName());
  s1.takeDamage(s2.getDamage());

  s2.attack(s1.getName());
  s1.takeDamage(s2.getDamage());
  
  s2.attack(s1.getName());
  s1.takeDamage(s2.getDamage());
  
  s2.attack(s1.getName());
  s1.takeDamage(s2.getDamage());

  s1.showStats();
  s1.guardGate();

  s2.attack(s1.getName());  //한번 더 때려서 남은 피가 없다. (guard 로 막는 기능은 아직 구현이 안 된 것)
  s1.takeDamage(s2.getDamage());
  
  s1.showStats();
  s1.guardGate();

 
  std::cout << "\n\n---------------------------\n";
  return 0;
}