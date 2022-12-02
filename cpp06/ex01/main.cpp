/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:44:23 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/30 10:44:24 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void display(Data* ptr)
{
	std::cout << "=======display========" << std::endl;
	std::cout << "a:" << ptr->a << std::endl;
	std::cout << "b:" << ptr->b << std::endl;
	std::cout << "c:" << ptr->c << std::endl;
	std::cout << "d:" << ptr->d << std::endl;
	std::cout << "=======display========" << std::endl;
}

uintptr_t serialize(Data* ptr)
{
	uintptr_t ans;
	ans = reinterpret_cast<uintptr_t>(ptr);
	return ans;
}

Data* deserialize(uintptr_t raw)
{
	Data* ans;
	ans = reinterpret_cast<Data*>(raw);
	return ans;
}

int main()
{
	Data *test = new Data;
	uintptr_t testptr;
	std::cout << "sizeof Data:" << sizeof(Data*) << std::endl;
	std::cout << "sizeof uintptr_t:" << sizeof(uintptr_t) << std::endl;
	// char t = reinterpret_cast<char>(test); >> 더 작은 경우에 컴파일 자체를 막아둔다.
	// std::cout << t << std::endl;
	std::cout << "=====================" << std::endl;
	test->a = 'a';
	test->b = 42;
	test->c = 42.42f;
	test->d = 42.42;

	// std::cout << "testptr:" << testptr << std::endl; >>> flag 등 없이 컴파일 하면 보여 줄 수 있음
	testptr = serialize(test);
	// std::cout << "testptr:" << testptr << std::endl;
	// testptr=1; >> 값을 바꾸면 정말 손상이 일어나서 세그폴트 일어남.


	std::cout << "testptr:" << testptr << std::endl;
	std::cout << "=====================" << std::endl;
	// 큰 값에 담아 둔 다음 변경없이 잘 유지하고 있다가 deserialize를 통해서도 값을 바꿀 수 있다... 용도는 모르겠음.
	deserialize(testptr)->a = 'b';
	deserialize(testptr)->b = 24;
	deserialize(testptr)->c = 24.24f;
	deserialize(testptr)->d = 24.24;
	display(test);
	delete test;
}
