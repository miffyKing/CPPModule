#include <iostream>
#include "Zombie.hpp"

int main()
{
  Zombie *koreanZombie = newZombie("junchansung");
  Zombie* zombie2 = new Zombie("bcho");

  koreanZombie->announce();
  zombie2->announce();

  randomChump("hihihi");
  delete koreanZombie;
  delete zombie2;
  return (0);
}