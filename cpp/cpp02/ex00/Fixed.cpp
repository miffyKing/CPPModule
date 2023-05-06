#include "Fixed.hpp"
#include <iostream>

Fixed:: Fixed() : number(0)
{
  std::cout<<"Default constructor called\n";
}

Fixed:: Fixed(Fixed& fixed)  //복사 생성자
{
  std::cout<<"Copy constructor called\n";
  *this = fixed;
}

Fixed& Fixed:: operator=(Fixed &ref)
{
  std::cout<<"Copy assignment operator called\n";
  this->number = ref.getRawBits();
  return (*this);
} 

Fixed:: ~Fixed()
{
  std::cout<<"Destructor called\n";
}


int Fixed:: getRawBits(void) const
{
  std::cout<<"getRawBits member function called\n";
  return this->number;
}

void Fixed:: setRawBits(int const raw)
{
  this->number = raw;
}

