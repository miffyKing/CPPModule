#include "Dog.hpp"

Dog::Dog() : Animal()
{
  this->type_ = "Dog";
  this->brain = new Brain();
  std::cout << "Dog is created\n";
}

Dog::Dog(Dog &dog)
{
  this->type_ = dog.getType();
  this->brain = new Brain(*dog.getBrain());
  std::cout << "Dog copy created\n";
}

Dog &Dog::operator=(Dog &dog)
{
  this->type_ = dog.getType();
  this->brain = new Brain(*dog.getBrain());
  return *this;
}

Dog::~Dog()
{
  delete this->brain;
  std::cout << "Dog destructor\n";
}

void Dog::makeSound() const
{
  std::cout << " Mung Mung Mung\n";
}

Brain* Dog::getBrain()
{
  return this->brain;
}