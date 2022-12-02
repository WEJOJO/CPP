/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:57:09 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/16 15:54:43 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string	str;
	std::string *stringPTR;
	std::string &stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::cout << "--------address--------" << std::endl;
	std::cout << "string's address : " << &str << std::endl;
	std::cout << "stringPTR's address : " << &stringPTR << std::endl;
	std::cout << "stringREF's address : " << &stringREF << std::endl;
	std::cout << "stringPTR == str same address : " << stringPTR << std::endl;

	std::cout << "--------value--------" << std::endl;
	std::cout << "string's value : " << str << std::endl;
	std::cout << "stringPTR's value : " << *stringPTR << std::endl;
	std::cout << "stringREF's value : " << stringREF << std::endl;
}
