/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:15:00 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/21 17:03:56 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include <stdio.h>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	// int d = 1;
	// std::cout << (d++)++ << std::endl;
	// std::cout << (++a)++ << std::endl;

	//
	// Fixed a(32);
	// Fixed b(32.1f);
	// std::cout << a-- << std::endl;
	// std::cout << a << std::endl;
	// std::cout << --a << std::endl;
	// if (a<b)
	// 	std::cout << "test1"<<std::endl;
	// Fixed aa(32);
	// Fixed bb(32.1f);
	// std::cout << aa++ << std::endl;
	// std::cout << aa << std::endl;
	// std::cout << ++aa << std::endl;
	// if (aa>bb)
	// 	std::cout << "test1"<<std::endl;
	//
	return 0;
}
