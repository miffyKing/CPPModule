#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
  std::cout << "Animal constructor called\n";
  this->type_ = " ==== default animal ==== ";
}

Animal::Animal(const Animal &animal)
{
  std::cout << "Copy constructor for animal called\n";
  *this = animal;
}

Animal &Animal::operator=(const Animal &ref)
{
  this->type_ = ref.getType();
  return *this;
}

Animal::~Animal()
{
  std::cout << "destructor for animal called\n";
}

// void Animal::makeSound(void) const
// {
//   std::cout << "default animal has no sound\n";
// }

std::string Animal::getType() const
{
  return this->type_;
}