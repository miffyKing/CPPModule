#include "Cat.hpp"

Cat:: Cat() : Animal()
{
  this->type_ = "Cat";
  std::cout<< "Cat is created\n";
}

Cat:: Cat(const Cat& cat) 
{
  this->type_ = cat.getType();
  std::cout<< "Cat copy created\n";
}

Cat& Cat:: operator=(const Cat& cat)
{
  this->type_ = cat.getType();
  return *this;
}

Cat:: ~Cat()
{
  std::cout<< "Cat destructor \n";
}

void Cat:: makeSound() const
{
  std::cout<< " Yaong Yaong\n";
}
