/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chobyounghwa <chobyounghwa@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:20:42 by chobyounghw       #+#    #+#             */
/*   Updated: 2023/05/17 18:10:43 by chobyounghw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));

  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << Fixed::max(a, b) << std::endl;

  std::cout << "=====================================\n\n";

  Fixed c = Fixed(3) - Fixed(1.4f);

  std::cout << c << std::endl;

  {
    std::cout << " compare integers \n\n";
    Fixed three = Fixed(3);
    Fixed four = Fixed(4);
    Fixed three2 = Fixed(3);
    if (three == four)
      std::cout << "3 and 4 are same?\n";
    if (three == three2)
      std::cout << " 3 and three2 are same\n";
    if (three < four)
      std::cout << "3 is smaller than 4\n";
    if (three > four)
      std::cout << "3 larger than 4, should not print\n";
    if (three <= three2)
      std::cout << "3 same or smaller than three2\n";
    if (three >= three2)
      std::cout << "3 same or larger than three2\n";
  }
  std::cout << " \n========================================== \n\n";

  {
    std::cout << " compare floats \n\n";
    Fixed three = Fixed(3.14f);
    Fixed four = Fixed(4.14f);
    Fixed three2 = Fixed(3.14f);
    if (three == four)
      std::cout << "3 and 4 are same?\n";
    if (three == three2)
      std::cout << " 3 and three2 are same\n";
    if (three < four)
      std::cout << "3 is smaller than 4\n";
    if (three > four)
      std::cout << "3 larger than 4, should not print\n";
    if (three <= three2)
      std::cout << "3 same or smaller than three2\n";
    if (three >= three2)
      std::cout << "3 same or larger than three2\n";
  }
  std::cout << " \n====================0 prefix postfix====================== \n\n";
  {
    std::cout << "1 : " << a << std::endl;
    std::cout << "2 : " << ++a << std::endl;
    std::cout << "3 : " << a << std::endl;
    std::cout << "4 : " << a++ << std::endl;
    std::cout << "5 : " << a << std::endl;
    std::cout << "6 : " << b << std::endl;
  }

  std::cout << " \n ==================== integer prefix postfix ==============\n\n";
  {
    Fixed js = Fixed(4);
    std::cout << "1 : " << js << std::endl;
    std::cout << "2 : " << ++js << std::endl;
    std::cout << "3 : " << js << std::endl;
    std::cout << "4 : " << js++ << std::endl;
    std::cout << "5 : " << js << std::endl;
  }

  std::cout << " \n ==================== float prefix postfix ==============\n\n";
  {
    Fixed js2 = Fixed(4.5f);
    std::cout << "1 : " << js2 << std::endl;
    std::cout << "2 : " << ++js2 << std::endl;

    std::cout << "2-1 : " << js2.toInt() << std::endl;
    std::cout << "2-2 : " << js2.toFloat() << std::endl;

    std::cout << "3 : " << js2 << std::endl;
    std::cout << "4 : " << js2++ << std::endl;
    std::cout << "5 : " << js2 << std::endl;
  }

  std::cout << " \n ================== + - / *  int , int test ==================\n\n";
  {
    Fixed num1 = Fixed(3);
    Fixed num3 = Fixed(2);

    std::cout << "3 + 2 is : " << num1 + num3 << "\n";
    std::cout << "3 - 2 is : " << num1 - num3 << "\n";
    std::cout << "3 * 2 is : " << num1 * num3 << "\n";
    std::cout << "3 / 2 is : " << num1 / num3 << "\n";
    std::cout << "2 - 3 is : " << num3 - num1 << "\n";
  }

  std::cout << " \n ================== + - / *  float , int test ==================\n\n";
  {
    Fixed num1 = Fixed(4.5f);
    Fixed num3 = Fixed(2);
    Fixed num4 = Fixed(3.25f);

    std::cout << "4.5 + 2 is : " << num1 + num3 << "\n";
    std::cout << "4.5 - 2 is : " << num1 - num3 << "\n";
    std::cout << "4.5 * 2 is : " << num1 * num3 << "\n";
    std::cout << "4.5 / 2 is : " << num1 / num3 << "\n";
    std::cout << "2 - 4.5 is : " << num3 - num1 << "\n";
    std::cout << "--------------------------------\n";
    std::cout << "3.25 + 2 is : " << num4 + num3 << "\n";
    std::cout << "3.25 - 2 is : " << num4 - num3 << "\n";
    std::cout << "3.25 * 2 is : " << num4 * num3 << "\n";
    std::cout << "3.25 / 2 is : " << num4 / num3 << "\n";
  }

  std::cout << " \n ================== + - / *  float , float test ==================\n\n";
  {
    Fixed num1 = Fixed(4.5f);
    Fixed num4 = Fixed(3.25f);

    std::cout << "4.5 + 3.25 is : " << num1 + num4 << "\n";
    std::cout << "4.5 - 3.25 is : " << num1 - num4 << "\n";
    std::cout << "4.5 * 3.25 is : " << num1 * num4 << "\n";
    std::cout << "4.5 / 3.25 is : " << num1 / num4 << "\n";
    std::cout << "3.25 - 4.5 is : " << num4 - num1 << "\n";
  }

  std::cout << " \n ================== divide by zero , crash ======================\n\n";
  {
    Fixed num1 = Fixed(0.0f);
    Fixed num2 = Fixed(4.5f);
    Fixed num3 = Fixed(4);

    // std::cout<< " 4.5 / 0 : " << num2 / num1 <<"\n";
    std::cout << " 0 / 4.5 : " << num1 / num2 << "\n";
  }

  std::cout << " \n\n ================= check Min, Max ================ \n\n";
  {
    Fixed num1 = Fixed(1.0f);
    Fixed num2 = Fixed(-1.0f);

    std::cout << Fixed::max(num1, num2) << "\n";

    Fixed num3 = Fixed(233);
    Fixed num4 = Fixed(222);
    std::cout << Fixed::min(num3, num4) << "\n";

    const Fixed num5 = Fixed(12);
    const Fixed num6 = Fixed(11);
    std::cout << Fixed::min(num5, num6) << "\n";
  }
  cout << "\n\n";

  // std::cout << Fixed::max( a, b ) << std::endl;

  return 0;
}