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

  Fixed operator+(const Fixed &ref);   //const 없으면 a = Fixed(1234.1231f) 에서 오류 발생.
  Fixed operator-(const Fixed &ref);   //const 없으면 a = Fixed(1234.1231f) 에서 오류 발생.
  Fixed operator*(const Fixed &ref);   //const 없으면 a = Fixed(1234.1231f) 에서 오류 발생.
  Fixed operator/(const Fixed &ref);   //const 없으면 a = Fixed(1234.1231f) 에서 오류 발생.

  bool operator==(const Fixed &f2);
  bool operator<(const Fixed &f2);
  bool operator>(const Fixed &f2);
  bool operator<=(const Fixed &f2);
  bool operator>=(const Fixed &f2);
  bool operator!=(const Fixed &f2);

  Fixed& operator++ ();
  Fixed operator ++ (int); // 전위 증감 연산자와 구분 위해 더미 변수인 int 를 둔다.
  Fixed& operator-- ();
  Fixed operator -- (int);

  static Fixed& min(Fixed& fixed1, Fixed& fixed2);
  static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
  static Fixed& max(Fixed& fixed1, Fixed& fixed2);
  static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);
  


  // ++ 했을 때 정확히 1 증가 하는게 아닌 0.00 몇이 증가하는데, 그 이유 알아야 해.

  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif