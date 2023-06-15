#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
  this->type_ = "WrongCat";
  std::cout << "WrongCat is created\n";
}

WrongCat::WrongCat(const WrongCat &Wrongcat)
{
  this->type_ = Wrongcat.getType();
  std::cout << "WrongCat copy created\n";
}

WrongCat &WrongCat::operator=(const WrongCat &Wrongcat)
{
  this->type_ = Wrongcat.getType();
  return *this;
}

WrongCat::~WrongCat()
{
  std::cout << "WrongCat destructor \n";
}

void WrongCat::makeSound() const
{
  std::cout << " gnoay gnoay\n";
}
