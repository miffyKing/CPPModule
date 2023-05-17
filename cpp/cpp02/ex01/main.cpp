/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chobyounghwa <chobyounghwa@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:20:42 by chobyounghw       #+#    #+#             */
/*   Updated: 2023/05/17 17:25:43 by chobyounghw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
  Fixed a;
  Fixed const b( 10 );
  Fixed const c( 42.42f );
  Fixed const d( b );

  a = Fixed( 1234.4321f );

  std::cout << "a is " << a << std::endl;
  std::cout << "b is " << b << std::endl;
  std::cout << "c is " << c << std::endl;
  std::cout << "d is " << d << std::endl;

std::cout<<"================================\n\n";
std::cout<<"================================\n\n";
  std::cout << "a is " << a.toInt() << " as integer" << std::endl;
  std::cout << "b is " << b.toInt() << " as integer" << std::endl;
  std::cout << "c is " << c.toInt() << " as integer" << std::endl;
  std::cout << "d is " << d.toInt() << " as integer" << std::endl;
std::cout<<"================================\n\n";
  std::cout << "a is " << a.toFloat() << " as Float" << std::endl;
  std::cout << "b is " << b.toFloat() << " as Float" << std::endl;
  std::cout << "c is " << c.toFloat() << " as Float" << std::endl;
  std::cout << "d is " << d.toFloat() << " as Float" << std::endl;

  std::cout<<"\n\n================================\n\n";
  // 2^24 승, 즉 8388608 을 넘어가면 제대로 된 값이 나오지 않는다.
  // 부호비트 하나 있어서 2^23 넘어가면 제대로 안나옴.
  
  {
    std::cout<< " check ====   2147483647  ====\n\n ";
    //2&32승
    a = Fixed(2147483647);
    std::cout << "a is " << a << " as integer" << std::endl;
  }
  
  {
    std::cout<< "\n\n check ==== 16777215   ====\n\n ";
    //2^24 승  
    a = Fixed(16777214);
    std::cout << "a is " << a << " as integer" << std::endl;
  }
  
  {
    std::cout<< "\n\n check ==== 8388607   ====\n\n ";
    //2^23 승  
    a = Fixed(8388607);
    std::cout << "a is " << a << " as integer" << std::endl;
  }

  {
    std::cout << "\n\n check 222222  =========  \n\n ";
    a = Fixed(222222);
    std::cout << "a is " << a << " as integer" << std::endl;
  }
  
  std::cout << "\n\n ================= \n\n";
  
  std::cout<< " ===== CHECK FLOAT RANGE ===== \n";

  // check float ... 65536.125 -> 1111111111111111.001
  a = Fixed(65535.125f);
  std::cout<< "a is " << a << " as float" << std::endl;
  std::cout<<"\n";
  //2^28 - 1
  a = Fixed(268435455.125f);
  std::cout<< "a is " << a << " as float" << std::endl;
  std::cout<<"\n";
  //2^29 - 1
  a = Fixed(536870911.125f);
  std::cout<< "a is " << a << " as float" << std::endl;
  std::cout<<"\n";
  //2^15 -1 ->
  a = Fixed(32767.125f);
  std::cout<< "a is " << a << " as float" << std::endl; 
  std::cout<<"\n";
  

  //
  std::cout << "\n\n============ CHECK SET RAW BITS ===========\n"; 
  a.setRawBits(65280); // 1111111100000000
  std::cout<< "a is " << a << "\n\n";
  
  a.setRawBits(65312); // 11111111.00100000
  std::cout<< "a is " << a << "\n\n";
    
  return 0;

}