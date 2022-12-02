/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:17:56 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:35:39 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"

int main()
{
	//abstract test
	// // Animal a; /// 객체 찍을  수  없음
	// Dog b;
	// Animal *a = &b;
	// a->makeSound();
	// Cat d;
	// std::cout << "testtest"<<std::endl;
	// Cat *c = nullptr;
	// *c = d;
	// a = c;
	// a->makeSound();

	/////================/////================/////================/////================/////================

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	// create and fill an array of Animal objects
	Animal *arr[10]; //추상클래스이므로 직접 찍지 못한다.
	int ii = 0;
	while(ii<5)
	{
		arr[ii] = new Dog();
		ii++;
		std::cout << "---------------" << std::endl;
	}
	while(ii<10)
	{
		arr[ii] = new Cat();
		ii++;
		std::cout << "---------------" << std::endl;
	}
	std::cout << "---------------" << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "---------------" << std::endl;
	ii = 0;
	while(ii < 10)
	{
		std::cout << "index:" << ii << std::endl;
		delete arr[ii]; //부모의 가상소멸자 없이 실험하려 했으나 애초에 컴파일이 안되서 실험이 안됌..
		ii++;
	}// >>>> arr[10]을 힙으로 할당했다면 이걸 쓰면 될듯?



	//---------Deep cpy TEST----------

	// Cat ctest;
	// ctest.testtest();
	// {
	// 	// 딥카피 하지 않으면 세그폴트가 남. >> 수정해서 보여주기 가능.
	// 	std::cout << "===============test in scope===============" << std::endl;
	// 	Cat	ctest2 = ctest; //copy constructor call '''' Cat	ctest2(ctest);
	// 	// Cat	ctest2; //copy assign
	// 	// ctest2 = ctest; //copy assign
	// 	ctest2.makeSound();
	// 	ctest2.testtest();
	// 	std::cout << "===============scope end===================" << std::endl;
	// }
	// ctest.testtest();

	//-------------------


	system("leaks ex01");
	return 0;
}

///cat test ing...