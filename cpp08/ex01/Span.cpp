/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:39:49 by nhwang            #+#    #+#             */
/*   Updated: 2022/12/02 14:39:50 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(unsigned int nn)
{
	_capacity = nn;
	arr.reserve(_capacity);
}
Span::~Span()
{
}
Span::Span(const Span& cpy)
{
	*this = cpy;
}
unsigned int Span::getCap() const
{
	return _capacity;
}
std::vector<int> Span::getArr() const
{
	return arr;
}
Span& Span::operator=(const Span& ass)
{
	if (this==&ass)
		return *this;
	this->arr=ass.getArr();//
	this->_capacity = ass.getCap();
	arr.reserve(_capacity);
	return *this;
}
void Span::addNumber(int p)
{
	if (arr.size()>=_capacity)
		throw std::exception();
	arr.push_back(p);
}
int Span::shortestSpan()
{
	if (arr.size()<= 1)
		throw std::exception();
	std::vector<int> temp = this->arr;
	std::sort(temp.begin(), temp.end());
	int minn = 2147483647;
	for (unsigned int i = 0 ; i + 1 < temp.size() ; i++)
		if (minn > temp[i+1]-temp[i])
			minn = temp[i+1]-temp[i];
	return minn;
}
int Span::longestSpan()
{
	if (arr.size()<= 1)
		throw std::exception();
	std::vector<int> temp = this->arr;
	std::sort(temp.begin(), temp.end());
	return (temp[temp.size()-1] - temp[0]);
}
//assign사용하기
void Span::assignVec(Span _from)
{
	if (_from.getArr().size() > (this->_capacity - this->arr.size()))
	{
		std::cout << "not enough empty   -";
		throw std::exception();
	}
	unsigned long long _resize = this->arr.size() + _from.getArr().size();
	if (_resize > 4294967295)
	{
		std::cout << "Span size over U_INT_MAX  -";
		throw std::exception();
	}

	this->arr.assign(_from.getArr().begin(), _from.getArr().end());
	arr.resize(_resize);
}
