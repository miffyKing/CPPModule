#include "Zombie.hpp"

void randomChump(std::string name)
{
  // Zombie *newZombie1 = newZombie(name);
  // newZombie1->announce();
  // 두개 구분 -> 첫번째는 소멸자 호출 안 함.
  Zombie zombie(name);
  zombie.announce();
  // 두번째는 함.
}