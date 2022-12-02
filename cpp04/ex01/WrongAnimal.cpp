/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:15:40 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:16:42 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal's Constructor Called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
	std::cout << "WrongAnimal's Copy Constructor Called" << std::endl;
	*this = cpy;
}
WrongAnimal& WrongAnimal::operator =(const WrongAnimal& ass)
{
	std::cout << "WrongAnimal's Assignment Called" << std::endl;
	type = ass.getType();
	return *this;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal's Destructor Called" << std::endl;
}
std::string WrongAnimal::getType() const
{
	return type;
}
void WrongAnimal::makeSound() const //Header빼는 경우
{
	std::cout << "WrongAnimal's makeSound" << std::endl;
}
