/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:17:20 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:17:21 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal's Constructor Called" << std::endl;
}
Animal::Animal(const Animal& cpy)
{
	std::cout << "Animal's Copy Constructor Called" << std::endl;
	*this = cpy;
}
Animal& Animal::operator =(const Animal& ass)
{
	std::cout << "Animal's Assign Called" << std::endl;
	type = ass.getType();
	return *this;
}
Animal::~Animal()
{
	std::cout << "Animal's Destructor Called" << std::endl;
}
std::string Animal::getType() const
{
	return type;
}
void Animal::makeSound() const //Header빼는 경우
{
	std::cout << "Animal's makeSound" << std::endl;
}
