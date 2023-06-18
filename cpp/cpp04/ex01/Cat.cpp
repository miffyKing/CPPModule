#include "Cat.hpp"

Cat::Cat() : Animal()
{
  this->type_ = "Cat";
  this->brain = new Brain();
  std::cout << "Cat is created\n";
}

Cat::Cat(const Cat &cat)
{
  delete this->brain;
  this->type_ = cat.getType();
  this->brain = new Brain(*cat.getBrain());
  std::cout << "Cat copy created\n";
}

Cat &Cat::operator=(const Cat &cat)
{
  delete this->brain;
  std::cout << "equi operator of cat \n";
  this->type_ = cat.getType();
  this->brain = new Brain(*cat.getBrain());
  return *this;
}

Cat::~Cat()
{
  delete this->brain;

  std::cout << "Cat destructor \n";
}

void Cat::makeSound() const
{
  std::cout << " Yaong Yaong\n";
}

Brain *Cat::getBrain() const
{
  return this->brain;
}
