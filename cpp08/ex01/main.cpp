/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:40:06 by nhwang            #+#    #+#             */
/*   Updated: 2022/12/02 14:42:20 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "=====================" << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "=====================" << std::endl;

	//////////////////////////short long 호출 후 원본의 변경이 일어났는지 확인.(변경 되면 안됌)/////////////////
	for (int i = 0; i < 5; i++)
		std::cout << sp.getArr()[i] << std::endl;
	//////////////////////////short long 호출 후 원본의 변경이 일어났는지 확인.(변경 되면 안됌)/////////////////

	std::cout << "=====================" << std::endl;

	try{
		Span sp2 = Span(0); //0개 받는 경경우  >> 푸쉬 허용 않음.
		sp2.addNumber(3);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << "-more than 0"<< std::endl;
	}

	//////////////////////5개 이상///////////////////////////////
	try
	{
		Span testsp(5);
		for (int i = 0; i < 10 ; i++)
		{
			testsp.addNumber(i);
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what()<< "-more than 5"  << std::endl;
	}
	//////////////////////5개 이상///////////////////////////////
	Span many(15000);
	try
	{
		for (int j = 0; j < 15010 ; j++)
		{
			many.addNumber(j*2);
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << "-more than 15000"<< std::endl;
	}
	Span one_call(20000);
	try{
		one_call.assignVec(many);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "=====================" << std::endl;
	for (unsigned int i = 0 ; i < one_call.getArr().size() ; i++)
		std::cout << one_call.getArr()[i] << std::endl;

	try{
		one_call.assignVec(many);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}


	// accounts_t				accounts( amounts, amounts + amounts_size ); 00-02
	// std::vector<int> arr3(arr.begin(), arr.end());
	return 0;
}