#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name)
{
  name_ = name;
}

Zombie::~Zombie()
{
  std::cout << "zombie died name " << name_ << "\n";
}

void Zombie::announce(void)
{
  std::cout << name_ << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string Name)
{
    name_ = Name;
}