#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
{
  std::cout << "Default constructor called\n";
  this->number = 0;
}

Fixed::Fixed(const int num)
{
  std::cout << "Int constructor called\n";
  this->number = (num << this->bits); // const 인데 변경하는게 아닌가?
  // 8비트 left shift
}

Fixed::Fixed(const float num)
{
  std::cout << "Float constructor called\n";
  this->number = roundf(num * (1 << this->bits));
  // 소수에는 바로 비트 연산을 못하니 1로 비트연산 한걸 곱한다.
  // roundf 로 가장 가까운 정수로 바꾼다
}

Fixed::Fixed(const Fixed &fixed) // 복사 생성자
{
  std::cout << "Copy constructor called\n";
  *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &ref)
{
  std::cout << "Copy assignment operator called\n";
  this->number = ref.getRawBits();
  return (*this);
}

Fixed::~Fixed()
{
  std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
  // std::cout<<"getRawBits member function called\n";
  return this->number;
}

void Fixed::setRawBits(int const raw)
{
  this->number = raw;
}

float Fixed::toFloat(void) const
{
  return (float)this->number / (1 << this->bits);
}

int Fixed::toInt(void) const
{
  return (this->number >> this->bits);
}

// ================사칙 연산자 ==================//

Fixed Fixed::operator+(const Fixed &ref) // const 없으면 a = Fixed(1234.1231f) 에서 오류 발생.
{
  Fixed newFixed(this->toFloat() + ref.toFloat());
  return newFixed;
}

Fixed Fixed::operator-(const Fixed &ref) // const 없으면 a = Fixed(1234.1231f) 에서 오류 발생.
{
  Fixed newFixed(this->toFloat() - ref.toFloat());
  return newFixed;
}

Fixed Fixed::operator*(const Fixed &ref) // const 없으면 a = Fixed(1234.1231f) 에서 오류 발생.
{
  Fixed newFixed(this->toFloat() * ref.toFloat());
  return newFixed;
}

Fixed Fixed::operator/(const Fixed &ref) // const 없으면 a = Fixed(1234.1231f) 에서 오류 발생.
{
  if (ref.toInt() == 0)
  {
    std::cout << "divider should not be zero :: crush\n";
    exit(1);
  }
  else
  {
    Fixed newFixed(this->toFloat() / ref.toFloat());
    return newFixed;
  }
}

// ================비교 연산자 ==================//

bool Fixed::operator==(const Fixed &f2)
{
  return (this->getRawBits() == f2.getRawBits());
}

bool Fixed::operator<(const Fixed &f2)
{
  return (this->getRawBits() < f2.getRawBits());
}

bool Fixed::operator>(const Fixed &f2)
{
  return (this->getRawBits() > f2.getRawBits());
}

bool Fixed::operator<=(const Fixed &f2)
{
  return (this->getRawBits() <= f2.getRawBits());
}

bool Fixed::operator>=(const Fixed &f2)
{
  return (this->getRawBits() >= f2.getRawBits());
}

bool Fixed::operator!=(const Fixed &f2)
{
  return (this->getRawBits() != f2.getRawBits());
}

// ================증감 연산자 (전위후위))==================//

Fixed &Fixed::operator++()
{
  // std::cout<<"before operator ++ " << this->number<<"\n";
  this->number++;
  // std::cout<<"after operator ++ " << this->number<<"\n";
  return *this;
}

Fixed Fixed::operator++(int)
{
  Fixed tmp(*this);
  this->number++;
  return tmp;
}

Fixed &Fixed::operator--()
{
  this->number--;
  return (*this);
}

Fixed Fixed::operator--(int)
{
  Fixed tmp(*this);
  this->number--;
  return tmp;
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
  return (fixed1.getRawBits() <= fixed2.getRawBits() ? fixed1 : fixed2);
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
  std::cout << "const input min comparator \n";
  return (fixed1.getRawBits() <= fixed2.getRawBits() ? fixed1 : fixed2);
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
  return (fixed1.getRawBits() <= fixed2.getRawBits() ? fixed2 : fixed1);
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
  std::cout << "const input max comparator \n";
  return (fixed1.getRawBits() <= fixed2.getRawBits() ? fixed2 : fixed1);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
  out << fixed.toFloat();
  return out;
}
