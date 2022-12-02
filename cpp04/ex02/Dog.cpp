/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:17:50 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:17:51 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog's Constructor Called" << std::endl;
	type = "Dog";
	brain = new Brain();
}
Dog::Dog(const Dog& cpy)
{
	std::cout << "Dog's Copy Constructor Called" << std::endl;
	if (cpy.getBrain()!=nullptr) ////
	{
		brain = new Brain(); ////
		*brain = *(cpy.getBrain());
		type = cpy.getType();
	}
	else
		brain = nullptr;
}
Dog& Dog::operator =(const Dog& ass)
{
	std::cout << "Dog's Assign Called" << std::endl;
	if (this == &ass)
		return *this;
	delete brain; ////
	if (ass.getBrain()!=nullptr)
	{
		// brain = ass.brain;
		brain = new Brain();////
		*brain = *(ass.getBrain());
		type = ass.getType();
	}
	else
		brain = nullptr;
	return *this;
}
Dog::~Dog()
{
	std::cout << "Dog's Destructor Called" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "Barrrrrrk" << std::endl;
}
std::string Dog::getType() const
{
	return type;
}
Brain* Dog::getBrain() const
{
	return brain;
}