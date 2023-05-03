#include "Zombie.hpp"

void randomChump(std::string name)
{
  // Zombie *newZombie1 = newZombie(name);
  // newZombie1->announce();
  // 두개 구분 -> 첫번째는 소멸자 호출 안 함.
  Zombie zombie(name);
  //Zombie zombie = Zombie(name); 위랑 같은 의미 
  
  
  zombie.announce();
  // 두번째는 함.
}