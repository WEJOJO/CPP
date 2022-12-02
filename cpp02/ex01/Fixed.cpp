/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:14:45 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/22 16:23:35 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	val = 0;
	flag = 0; //
	standard = -2147483648;//
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int valarg) ////<<operator에서 타입으로 분기처리할 수도 있겠지만 둘다 toFloat을 쓴다면 가능하기에, 인트를 그대로 저장하지 않는다.
{
	standard = -2147483648;
	int i = 0;
	val = valarg;
	flag = 0; //
	while(i < fractional)
	{
		if (standard & val)
			buff[i] = 1;
		else
			buff[i] = 0;
		val = val << 1;
		i++;
	}
	//val = valarg << fractional;//
	std::cout << "Int constructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed &assign)
{
	std::cout << "Copy assignment operator called " << std::endl;
	if (this == &assign)// ****주의
		return *this;
	val = assign.val;
	int i = 0;
	while(i<8)
	{
		buff[i] = assign.buff[i];
		i++;
	}
	standard = assign.standard;
	flag = assign.flag;
	return *this;
}

Fixed::Fixed(const float valarg)
{
	flag = 1;
	val = roundf(valarg * (float)(1<<fractional)); ////
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)// : val(copy.val)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
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

float Fixed::toFloat( void ) const
{
	float ret;

	ret = (val / ((float)(1<<fractional)));
	return ret;
}

int Fixed::toInt( void ) const
{
	if (flag)
		return (val >> fractional);/// 11.22
	int ans = 0;
	int j = 0;
	int temp = val;
	while(j<8)
	{
		ans<<=1;
		if (buff[j])
			ans++;
		j++;
	}
	j = 0;
	while(j<24)
	{
		ans<<=1;
		if (standard & temp)
			ans++;
		temp<<=1;
		j++;
	}
	//ret = (int)val; //이게 다인지 살펴봐야함
	// std::cout << "in toInt : " << ret << std::endl;/// in toint
	return (ans);
	//return ret;
}

std::ostream& operator << (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}