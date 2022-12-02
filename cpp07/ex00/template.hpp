#ifndef TEMPLATE
# define TEMPLATE

#include <iostream>

template <typename T>
void swap (T& a, T& b)
{
	T temp = a; //참조형 쓰쓰지지말말것것.
	a = b;
	b = temp;
}

template <typename T>
T min(const T a, const T b)//second one
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T max(const T a, const T b) //second one
{
	if (a > b)
		return a;
	else
		return b;
}

# endif