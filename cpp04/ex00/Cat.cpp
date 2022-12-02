/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:15:17 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:15:21 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat's Constructor Called" << std::endl;
}
Cat::Cat(const Cat& cpy)
{
	std::cout << "Cat's Copy Constructor Called" << std::endl;
	*this = cpy;
}
Cat& Cat::operator =(const Cat& ass)
{
	std::cout << "Cat's Assignment Called" << std::endl;
	if (this == &ass)
		return *this;
	type = ass.getType();
	return *this;
}
Cat::~Cat()
{
	std::cout << "Cat's Destructor Called" << std::endl;
}
void Cat::makeSound() const
{
	std::cout << "Meowwwww" << std::endl;
}
std::string Cat::getType() const
{
	return type;
}