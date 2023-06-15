#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
  std::cout << "WrongAnimal constructor called\n";
  this->type_ = " ==== default Wronganimal ==== ";
}

WrongAnimal::WrongAnimal(const WrongAnimal &Wronganimal)
{
  std::cout << "Copy constructor for Wronganimal called\n";
  *this = Wronganimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ref)
{
  this->type_ = ref.getType();
  return *this;
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "destructor for Wronganimal called\n";
}

void WrongAnimal::makeSound(void) const
{
  std::cout << "default Wronganimal has no sound\n";
}

std::string WrongAnimal::getType() const
{
  return this->type_;
}