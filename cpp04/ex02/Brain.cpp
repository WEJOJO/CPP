/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:17:40 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:17:41 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain's Constructor Called" << std::endl;
	int i = 0;
	std::string tmp = "temp";
	while(i < 100)
	{
		ideas[i] = tmp;
		i++;
	}
}
Brain::Brain(std::string s)
{
	std::cout << "Brain's Constructor Called" << std::endl;
	int i = 0;
	while(i < 100)
	{
		ideas[i] = s;
		i++;
	}
}
Brain::Brain(const Brain& cpy)
{
	std::cout << "Brain's Copy Constructor Called" << std::endl;
	*this = cpy;
}

Brain& Brain::operator =(const Brain& ass)
{
	std::cout << "Brain's Assignment Called" << std::endl;
	if (this == &ass)
		return *this;
	int i = 0;
	while(i < 100)
	{
		ideas[i] = ass.getIdea(i);
		i++;
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain's Destructor Called" << std::endl;
}

void Brain::showIdeas()
{
	int i = 0;
	while(i<10) //10개만
	{
		std::cout << ideas[i] << std::endl;
		i++;
	}
}

std::string Brain::getIdea(int index) const //
{
	if (index < 0 || index > 99)
	{
		std::cout << "index out of range" << std::endl;
		return NULL;
	}
	return ideas[index];
}
