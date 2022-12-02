/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:14:58 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/22 16:22:04 by nhwang           ###   ########.fr       */
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
	Fixed(const float valarg);
	Fixed(const Fixed &copy);
	Fixed& operator = (const Fixed &assign);
	bool operator > (const Fixed &assign);
	bool operator < (const Fixed &assign);
	bool operator >= (const Fixed &assign);
	bool operator <= (const Fixed &assign);
	bool operator == (const Fixed &assign);
	bool operator != (const Fixed &assign);
	float operator +(const Fixed &assign);
	float operator -(const Fixed &assign);
	float operator *(const Fixed &assign);
	float operator /(const Fixed &assign);
	const Fixed& operator ++();///void arg
	const Fixed operator ++(int);///void arg
	const Fixed operator --(int);
	const Fixed& operator --();///void arg
	static Fixed& max( Fixed& f1,Fixed& f2 );
	static const Fixed& max( const Fixed& f1,const Fixed& f2 );
	static Fixed& min( Fixed& f1,Fixed& f2 );
	static const Fixed& min( const Fixed& f1,const Fixed& f2 );




	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;
} ;

std::ostream& operator << (std::ostream& out, const Fixed &assign);

#endif