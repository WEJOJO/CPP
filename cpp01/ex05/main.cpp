/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:35:28 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/02 13:01:24 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl test;
	std::cout << "------------------------------" << std::endl;

	test.complain("DEBUG");
	test.complain("INFO");
	test.complain("WARNING");
	test.complain("ERROR");

	std::cout << "------------------------------" << std::endl;

	test.complain("-1");
	test.complain("4");
	test.complain("asdfsd");
	test.complain("ERROr");
	test.complain(" ERROR");
	test.complain("");
}
// Test	test;
// 	int	(Test::*f)(int, int) = &Test::add;