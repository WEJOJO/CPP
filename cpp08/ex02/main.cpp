/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:39:33 by nhwang            #+#    #+#             */
/*   Updated: 2022/12/02 14:39:33 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(1111);
	mstack.push(0);
	std::cout << "================" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	//  s.begin(); >> stack에서는 존재하지  않음을 보이는 케이스
	std::cout << "================" << std::endl;
	std::list<int> test;
	test.push_back(5);
	test.push_back(17);
	std::cout << test.back() << std::endl;
	test.pop_back();
	std::cout << test.size() << std::endl;
	test.push_back(3);
	test.push_back(5);
	test.push_back(737);
	test.push_back(1111);
	test.push_back(0);
	std::cout << "================" << std::endl;
	std::list<int>::iterator it2 = test.begin();
	std::list<int>::iterator ite2 = test.end();
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	return 0;
}