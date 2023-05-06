#include "Fixed.hpp"
#include <iostream>

Fixed:: Fixed() 
{
  std::cout<<"Default constructor called\n";
}

Fixed:: Fixed(Fixed& fixed)  //복사 생성자
{
  std::cout<<"Copy constructor called\n";
  this = fixed;
}

Fixed:: ~Fixed()
{
  std::cout<<"Destructor called\n";
}


int Fixed:: getRawBits(void) const
{

}



void Fixed:: setRawBits(int const raw)
{

}
