/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:14:56 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/22 16:23:34 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	val = 0;
	flag = 0; //
	standard = -2147483648;//
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int valarg) ////
{
	// val = valarg << fractional;
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
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float valarg)
{
	val = roundf(valarg * (float)(1<<fractional)); ////
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed &assign)
{
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
	// std::cout << "Copy assignment operator called " << std::endl;
	return *this;
}
bool Fixed::operator > (const Fixed &assign)
{
	if (val > assign.val)
		return true;
	else
		return false;
}

bool Fixed::operator < (const Fixed &assign)
{
	if (val < assign.val)
		return true;
	else
		return false;
}

bool Fixed::operator >= (const Fixed &assign)
{
	if (val >= assign.val)
		return true;
	else
		return false;
}

bool Fixed::operator <= (const Fixed &assign)
{
	if (val <= assign.val)
		return true;
	else
		return false;
}

bool Fixed::operator == (const Fixed &assign)
{
	if (val == assign.val)
		return true;
	else
		return false;
}

bool Fixed::operator != (const Fixed &assign)
{
	if (val != assign.val)
		return true;
	else
		return false;
}

float Fixed::operator +(const Fixed &assign)
{
	Fixed tmp;

	tmp.val = val+assign.val;
	return (tmp.toFloat());
}

float Fixed::operator -(const Fixed &assign)
{
	Fixed tmp;

	tmp.val = val-assign.val; //*과는 다르게, float으로 바꾸기 전에 인트끼리 먼저 덧셈 뺼셈을 진행하였음
	return (tmp.toFloat());
}

////// float간에는 문제가 없으나, int와 섞이면?
float Fixed::operator *(const Fixed &assign)
{
	Fixed tmp;

	return(this->toFloat()*assign.toFloat()); //덧셈과의 차이는? 얘는 int에서 곱한다음 플롯으로 바꾸면 문제가 생겨서
	//플롯으로 바꾼 뒤에 연산을 시도하였음.
}

float Fixed::operator /(const Fixed &assign)
{
	Fixed tmp;

	return(this->toFloat()/assign.toFloat()); //덧셈과의 차이는? 얘는 int에서 곱한다음 플롯으로 바꾸면 문제가 생겨서
	//플롯으로 바꾼 뒤에 연산을 시도하였음.
}

const Fixed& Fixed::operator ++() //전위, 후위 어떻게??
{
	this->val++;
	return *this;
}

const Fixed Fixed::operator ++(int) //후위 어떻게 >> 더미값 주면 됌
{
	Fixed tmp(this->toFloat());
	this->val++;
	return tmp;
}

const Fixed& Fixed::operator --() //전위, 후위 어떻게??
{
	this->val--;
	return *this;
}

const Fixed Fixed::operator --(int) //후위 어떻게 >> 더미값 주면 됌
{
	Fixed tmp(this->toFloat());
	this->val--;
	return tmp;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
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
	// std::cout << "in toInt : " << ret << std::endl;/// in toint
	return (val >> fractional);
	//return ret;
}

Fixed& Fixed::max( Fixed& f1,Fixed& f2 )
{
	if (f1 >= f2)
		return f1;
	else
		return f2;
}

const Fixed& Fixed::max( const Fixed& f1,const Fixed& f2 )
{
	if (f1.val >= f2.val) //콘스트 형에 대해 오버라이딩 하지 않았기 때문에 위와 같이 그냥은 쓸수 없음
		return f1;
	else
		return f2;
}

Fixed& Fixed::min( Fixed& f1,Fixed& f2 )
{
	if (f1 >= f2)
		return f2;
	else
		return f1;
}

const Fixed& Fixed::min( const Fixed& f1,const Fixed& f2 )
{
	if (f1.val >= f2.val)
		return f2;
	else
		return f1;
}

std::ostream& operator << (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}