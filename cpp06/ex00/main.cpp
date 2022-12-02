/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:49:47 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/30 10:49:48 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char *argv[])
{
	if (argc!=2)
	{
		std::cout << "arg must 1" << std::endl;
		return 1;
	}
	Conversion a(argv[1]);
	std::cout << "=====================" << std::endl;
	a.toChar();
	a.toInt();
	a.toFloat();
	a.toDouble();
	std::cout << "=====================" << std::endl;
}