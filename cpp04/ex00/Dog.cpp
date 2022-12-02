/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:15:26 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:15:27 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog's Constructor Called" << std::endl;
}
Dog::Dog(const Dog& cpy)
{
	std::cout << "Dog's Copy Constructor Called" << std::endl;
	*this = cpy;
}
Dog& Dog::operator =(const Dog& ass)
{
	std::cout << "Dog's Assignment Called" << std::endl;
	if (this == &ass)
		return *this;
	type = ass.getType();
	return *this;
}
Dog::~Dog()
{
	std::cout << "Dog's Destructor Called" << std::endl;
}
void Dog::makeSound() const
{
	std::cout << "Barrrrrrk" << std::endl;
}
std::string Dog::getType() const
{
	return type;
}