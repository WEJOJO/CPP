/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:14:34 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/21 17:42:12 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	val = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &copy) : val(copy.val)
{
	std::cout << "Copy constructor called" << std::endl;
}
Fixed& Fixed::operator = (const Fixed &assign)
{
	if (this == &assign)// ****주의
		return *this;
	val = assign.val;
	std::cout << "Copy assignment operator called " << std::endl;
	return *this;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return val;
}
void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	val = raw;
	return ;
}


// Default constructor called
// Int constructor called
// Float constructor called
// Copy constructor called
// Copy assignment operator called
// Float constructor called
// Copy assignment operator called
// Destructor called



// a is 1234.43 b is 10 c is 42.4219 d is 10 a is 1234 as integer b is 10 as integer c is 42 as integer d is 10 as integer Destructor called Destructor called Destructor called Destructor called