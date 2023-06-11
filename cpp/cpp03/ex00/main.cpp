#include <iostream>
#include "ClapTrap.hpp"

int main()
{

  { //대혁이가 너무 쌔게 맞아서 복구조차 하지 못하는 상황.

    std::cout << " ========= main begins ========= \n";
    ClapTrap bcho("bcho");
    ClapTrap dayun("dayun");

    bcho.setDamage(10);
    dayun.setDamage(2);
    bcho.attack(dayun.getName()); //병화가 대혁이를 때린다.

    bcho.showStats();
    dayun.showStats();
    std::cout<< "=========================\n";

    dayun.takeDamage(bcho.getDamage()); // 대혁이가 주먹을 맞는다.
    dayun.showStats();
    dayun.beRepaired(5); //대혁이가 치료햔댜.
    dayun.showStats();

  }

  {
    //대혁이가 맞았지만 복구는 가능한 상황.
    
    std::cout << " \n\n========= main begins ========= \n\n";
    ClapTrap bcho("bcho");
    ClapTrap dayun("dayun");

    bcho.setDamage(5);
    dayun.setDamage(2);
    bcho.attack(dayun.getName()); //병화가 대혁이를 때린다.

    bcho.showStats();
    dayun.showStats();
    std::cout<< "=========================\n";

    dayun.takeDamage(bcho.getDamage()); // 대혁이가 주먹을 맞는다.
    dayun.showStats();
    dayun.beRepaired(5); //대혁이가 치료햔댜.
    dayun.showStats();
  }

  {// 대혁이한테 한대 맞았지만 카운터로 대혁이가 뻗는 상황
    
    std::cout << "\n\n ========= main begins ========= \n\n";
    ClapTrap bcho("bcho");
    ClapTrap dayun("dayun");

    bcho.setDamage(10);
    dayun.setDamage(2);
    dayun.attack(bcho.getName()); //병화가 대혁이를 때린다.

    bcho.showStats();
    dayun.showStats();
    std::cout<< "=========================\n";

    bcho.takeDamage(dayun.getDamage()); // 대혁이가 주먹을 맞는다.
    bcho.showStats();
    bcho.beRepaired(5); //대혁이가 치료햔댜.
    bcho.showStats();

    bcho.attack(dayun.getName());
    dayun.takeDamage(bcho.getDamage());
    bcho.showStats();
    dayun.showStats();

  }
  // bcho.attack(dayun.getName());
  // dayun.takeDamage(bcho.getDamage());

  // bcho.showStats();
  // dayun.showStats();

  // dayun.attack(bcho.getName());
  // bcho.takeDamage(dayun.getDamage());

  // bcho.showStats();
  // dayun.showStats();

  // bcho.beRepaired(3);
  // dayun.beRepaired(5);

  // bcho.showStats();
  // dayun.showStats();

  std::cout << "\n\n---------------------------\n";
  return 0;
}