/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:14:37 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/21 14:14:38 by nhwang           ###   ########.fr       */
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
public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed& operator = (const Fixed &assign);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
} ;

#endif