/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:41:16 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/30 10:41:18 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base* generate(void) //delete와 함께 쓸 것.
{
	std::srand(time(NULL));
	int t = std::rand();
	Base* ans;
	if (t%3==0)
		ans = new A;
	else if(t%3 == 1)
		ans = new B;
	else
		ans = new C;
	return ans;
}

void identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a!=NULL)					///dynamic vs static
		std::cout << "A" << std::endl;
	if (b!=NULL)
		std::cout << "B" << std::endl;
	if (c!=NULL)
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			C c = dynamic_cast<C&>(p);
			std::cout << "C" << std::endl;
		}
	}
}

int main()
{
	Base* ta = generate();
	identify(ta);
	delete ta;

	ta = generate();
	identify(*ta);
	delete ta;
}