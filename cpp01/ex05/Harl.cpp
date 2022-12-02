/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:35:24 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/16 15:43:28 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
	f[0]=&Harl::debug;
	f[1]=&Harl::info;
	f[2]=&Harl::warning;
	f[3]=&Harl::error;
	//std::string	*arr[4];
	arr[0] = "DEBUG";
	arr[1] = "INFO";
	arr[2] = "WARNING";
	arr[3] = "ERROR";
}

void Harl::complain(std::string level) //std::string level
{
	int i;

	i = 0;
	while(i<4)
	{
		if (arr[i] == level)
		{
			(this->*f[i])();
			return ;
		}
		i++;
	}
	std::cout << "level must DEBUG, INFO, WARNING, ERROR" << std::endl;
}
