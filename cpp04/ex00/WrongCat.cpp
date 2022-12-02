/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:15:58 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:16:06 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat's Constructor Called" << std::endl;
}
WrongCat::WrongCat(const WrongCat& cpy)
{
	std::cout << "WrongCat's Copy Constructor Called" << std::endl;
	*this = cpy;
}
WrongCat& WrongCat::operator =(const WrongCat& ass)
{
	std::cout << "WrongCat's Assignment Called" << std::endl;
	if (this == &ass)
		return *this;
	type = ass.getType();
	return *this;
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat's Destructor Called" << std::endl;
}
void WrongCat::makeSound() const
{
	std::cout << "Wrong :::: Meowwwww" << std::endl;
}
std::string WrongCat::getType() const
{
	return type;
}