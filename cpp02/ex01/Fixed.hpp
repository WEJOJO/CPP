/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:14:48 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/22 16:21:55 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
private:
	static const int fractional = 8;
	int val;
	int buff[8];//
	int standard;//
	int flag;//
public:
	Fixed();
	Fixed(const int valarg);
	Fixed& operator = (const Fixed &assign);
	Fixed(const Fixed &copy);
	Fixed(const float valarg);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;
} ;

std::ostream& operator << (std::ostream& out, const Fixed &assign);

#endif