/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:56:42 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/16 11:55:27 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{
	index = 0;
	size = 0;
	oldest = 0;
}
void	PhoneBook::ft_add()
{
	if (size==8)
	{
		m_contact[oldest] = Contact(oldest);
		oldest++;
		if (oldest == 8)
			oldest = 0;
		return ;
	}
	m_contact[index] = Contact(index);
	index++;
	if (size<8)
		size++;
}
void	PhoneBook::ft_search()
{
	int	i;

	if (size==0)
	{
		std::cout << "Contack is Empty" << std::endl;
		return ;
	}
	i = 0;
	while(i < size)
	{
		m_contact[i].ft_travel();
		i++;
	}
	while(1)
	{
		std::cout << "type index : " << std::endl;
		std::cin >> i;
		if (std::cin.fail() || i < 0 || i > size-1)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cout << "!! : 0 <= index <= size of Contacks" << std::endl;
		}
		else
			break ;
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	m_contact[i].ft_contactinfo();
}