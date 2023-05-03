#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <stdlib.h>

class Zombie
{
  private:
    std::string name_;
  public:
    Zombie();
    Zombie(std::string Name);
    void announce(void);
    ~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
//하나의 파일로 class 좀비, 뉴좀비, 랜덤첨
#endif
