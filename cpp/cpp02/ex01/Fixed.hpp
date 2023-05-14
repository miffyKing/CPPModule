#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed
{
private:
  int number;
  static const int bits = 8;

public:
  
  Fixed(void);
  Fixed(const int num);
  Fixed(const float num);
  Fixed(const Fixed &fixed);
  ~Fixed();

  Fixed& operator=(const Fixed &ref);   //const 없으면 a = Fixed(1234.1231f) 에서 오류 발생.
  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif