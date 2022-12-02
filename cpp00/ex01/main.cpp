/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:24:53 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/15 17:56:36 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	ft_chk_validate(std::string command)
{
	if (command.compare("ADD")==0)
		return 1;
	else if (command.compare("SEARCH")==0)
		return 2;
	else if (command.compare("EXIT")==0)
		exit(1);
	return (0);
}

int main()
{
	PhoneBook	p;
	int com;
	std::string	command;

	while(1)
	{
		std::cout << "Input Command : " << std::endl;
		std::getline(std::cin, command);
		com = ft_chk_validate(command);
		if (com)
		{
			if (com == 1)
				p.ft_add();
			else
				p.ft_search();
		}
		else
			std::cout << "Command should ADD, SEARCH, EXIT" << std::endl;
	}
}

// 123456789012345678901234567890
// 098765432109876543210987654321