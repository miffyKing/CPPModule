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
    void setName(std::string Name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
