/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:14:50 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/22 16:24:18 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include <stdio.h>
#include "Fixed.hpp"

// int main()
// {
// 	float a = 1234.4321f;
// 	int val;

// 	printf("bf round %f\n",a * (1<<8));
// 	val = roundf(a * (float)(1<<8));
// 	printf("v : %d\n", val);
// 	printf("val to float : %f", (val / (float)(1<<8)));
// }

int main( void ) {
	Fixed a; //Default constructor called
	Fixed const b( 10 ); //Int constructor called
	Fixed const c( 42.42f ); //Float constructor called
	Fixed const d( b ); //Copy constructor called

	a = Fixed (1234.4321f); //copy assignment > float construct > copt assignment
	//ㄴ> 내거는 현재 float construct > copt assignment 진행

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << "--------bit test-----------" << std::endl;
	Fixed z(50331648);
	std::cout << z.toInt() << std::endl;
	std::cout << "---------------------------" << std::endl;
	return 0;
}
// 00000011 00000000 00000000 00000000 >> 50331648
// 부호의 유실은 어떻게할것인가...
//-2147483648 == 앞이1인건가