#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed:: Fixed(void)
{
  std::cout<<"Default constructor called\n";
  this->number = 0;
}

Fixed:: Fixed(const int num)
{
  std::cout<<"Int constructor called\n";
  this->number = (num<<this->bits); //const 인데 변경하는게 아닌가?
  //8비트 left shift
}

Fixed:: Fixed(const float num)
{
  std::cout<<"Float constructor called\n";
  this->number = roundf(num*(1<<this->bits));
  //소수에는 바로 비트 연산을 못하니 1로 비트연산 한걸 곱한다. 
  //roundf 로 가장 가까운 정수로 바꾼다
}

Fixed:: Fixed(const Fixed& fixed)  //복사 생성자
{
  std::cout<<"Copy constructor called\n";
  *this = fixed;
}

Fixed& Fixed:: operator=(const Fixed &ref)
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
  //std::cout<<"getRawBits member function called\n";
  return this->number;
}

void Fixed:: setRawBits(int const raw)
{
  this->number = raw;
}

float Fixed:: toFloat(void) const
{
  return (float)this->number / (1 << this->bits);
}

int Fixed:: toInt(void) const
{
  return (this->number >> this->bits);
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
{
  out<<fixed.toFloat();
  return out;
}