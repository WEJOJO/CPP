#ifndef ITER
# define ITER


#include <iostream>

template <typename T>
void iter(const T *arr, unsigned long len, void (*f)(const T&)) ///문법적인 것 확인 T const&
{
	unsigned long i = 0;
	while(i < len)
	{
		f(arr[i]);
		i++;
	}
}

template <typename T>
void iter(T *arr, unsigned long len, void (*f)(T&)) ///문법적인 것 확인 T const&
{
	unsigned long i = 0;
	while(i < len)
	{
		f(arr[i]);
		i++;
	}
}

# endif