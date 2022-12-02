/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:17:45 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 18:06:48 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat's Constructor Called" << std::endl;
	brain = new Brain();
}
Cat& Cat::operator =(const Cat& ass)
{
	std::cout << "Cat's Assign Called" << std::endl;
	if (this == &ass)
		return *this;
	// if ((*brain).getIdea(0)!="")//오히려 더 더러운 것 같아서 지움. ----*this
	// 	delete brain;
	delete brain;
	if (ass.getBrain()!=nullptr)
	{
		brain = new Brain();
		*brain = *(ass.getBrain());
		type = ass.getType();
	}
	else
		brain = nullptr;
	return *this;
}
Cat::Cat(const Cat& cpy)
{
	std::cout << "Cat's Copy Constructor Called" << std::endl;
	if (cpy.getBrain()!=nullptr) ////
	{
		brain = new Brain(); ////
		*brain = *(cpy.getBrain());
		type = cpy.getType();
	}
	else
		brain = nullptr;////
	// *this = cpy;
}

Cat::~Cat()
{
	std::cout << "Cat's Destructor Called" << std::endl;
	delete brain;
}
void Cat::makeSound() const
{
	std::cout << "Meowwwww" << std::endl;
}
std::string Cat::getType() const
{
	return type;
}

Brain* Cat::getBrain() const
{
	return brain;
}

void Cat::testtest()
{
	std::cout << brain << std::endl;
}