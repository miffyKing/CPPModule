#include "Dog.hpp"

Dog::Dog() : Animal()
{
  this->type_ = "Dog";
  std::cout << "Dog is created\n";
}

Dog::Dog(const Dog &dog)
{
  this->type_ = dog.getType();
  std::cout << "Dog copy created\n";
}

Dog &Dog::operator=(const Dog &dog)
{
  this->type_ = dog.getType();
  return *this;
}

Dog::~Dog()
{
  std::cout << "Dog destructor\n";
}

void Dog::makeSound() const
{
  std::cout << " Mung Mung Mung\n";
}