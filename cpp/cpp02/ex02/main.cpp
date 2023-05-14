/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chobyounghwa <chobyounghwa@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:20:42 by chobyounghw       #+#    #+#             */
/*   Updated: 2023/05/15 03:25:37 by chobyounghw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));

  Fixed c = Fixed(3) - Fixed(1.4f);

  std::cout << c << std::endl;

  // std::cout << a << std::endl;

  // std::cout << ++a << std::endl;

  // std::cout << a << std::endl;

  // std::cout << a++ << std::endl;

  // std::cout << a << std::endl;

  std::cout << b << std::endl;

  // std::cout << Fixed::max( a, b ) << std::endl;

  return 0;
}