#include "Cat.hpp"

Cat::Cat() : Animal()
{
  this->type_ = "Cat";
  this->brain = new Brain();
  std::cout << "Cat is created\n";
}

Cat::Cat(Cat &cat)
{
  this->type_ = cat.getType();
  this->brain = new Brain(*cat.getBrain()); //* 인 이유? Brain 의 생성자를 자세히 보자.
  std::cout << "Cat copy created\n";
}

Cat &Cat::operator=(Cat &cat)
{
  this->type_ = cat.getType();
  this->brain = new Brain(*cat.getBrain()); // 그냥 cat.getBrain() 을 할당해 주지 않는 이유가 무엇인가??
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

Brain *Cat::getBrain()
{
  return this->brain;
}
