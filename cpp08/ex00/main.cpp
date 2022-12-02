/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:44:52 by nhwang            #+#    #+#             */
/*   Updated: 2022/12/02 14:44:53 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
	std::vector<int> a;
	std::vector<float> b;
	std::vector<char> c;

	//가장 첫 번째 것을 리턴하는데, 주소처럼되어있는데 프린트 찍도록 확인해야하는지??
	for (int i = 0; i <5 ; i++)
	{
		a.push_back(i);
	}
	try{
		std::cout << *(easyfind(a, 4)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "======a ERR======" << std::endl;
		std::cout << e.what() << std::endl;
	}


	std::cout << "\n ========================================== \n" << std::endl;


	for (int i = 0; i <5 ; i++)
	{
		b.push_back(static_cast<float>(i)+0.2f);
		std::cout << "in b: " << b[i] << std::endl;
	}
	try{
		std::cout << *(easyfind(b, 4)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "======b ERR======" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n ========================================== \n" << std::endl;

	/////
	for (int i = 0; i <5 ; i++)
	{
		c.push_back(static_cast<char>(i+90));
		std::cout << "in b: " << c[i] << std::endl;
	}
	try{
		std::cout << *(easyfind(c, 4)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "======c ERR======" << std::endl;
		std::cout << e.what() << std::endl;
	}
}