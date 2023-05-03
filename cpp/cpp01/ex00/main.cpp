#include <iostream>
#include "Zombie.hpp"

int main()
{
  Zombie *koreanZombie = newZombie("junchansung");   //new 사용 -> 힙 할당, 직접 소멸자 호출해줘야함.
  Zombie* zombie2 = new Zombie("bcho");   //new, 직접 소멸자
  
  Zombie zombie3("dayun");  //스택에 할당
  

  koreanZombie->announce();
  zombie2->announce();
  zombie3.announce();

  randomChump("hihihi"); //스택에 할당.
  delete koreanZombie;
  delete zombie2;
  return (0);
}