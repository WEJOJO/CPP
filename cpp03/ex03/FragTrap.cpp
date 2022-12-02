/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:09:14 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 13:14:13 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("No_name", 100, 100, 30)
{
	std::cout << "---------FT - Constructor called---------" << std::endl;
	this->h_point = 100;
	this->e_point = ClapTrap::getEnePoint();
	this->damage = 30;
	display();
	std::cout << "-----------------------------------------" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "---------FT - Constructor called---------" << std::endl;
	display();
	std::cout << "-----------------------------------------" << std::endl;
}
FragTrap::FragTrap(const FragTrap& copy)
{
	std::cout << Name + " : FT - copy constructor called" << std::endl; //바꾸기 전 이름 >> 생성자이기 떄문에 무명일것.
	*this = copy;
}
FragTrap& FragTrap::operator =(const FragTrap& ass)
{
	std::cout << Name + " : FT - copy assignment called" << std::endl; //바꾸기 전 이름 >> 생성자이기 떄문에 무명일것.
	if (this == &ass)
		return *this;
	Name = ass.getName();
	h_point = ass.getHitPoint();
	e_point = ass.getEnePoint();
	damage = ass.getDamage();
	return *this;
}
void FragTrap::highFivesGuys(void)
{
	if (!h_point || !e_point)
	{
		std::cout << "turned off this FragTrap : " + Name << std::endl;
		return;
	}
	std::cout << "Good!!" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "FT-" << Name << " : is Off" << std::endl;
}

void FragTrap::display()
{
	std::cout << "name : " << Name << std::endl;
	std::cout << "h_point : " << h_point << std::endl;
	std::cout << "e_point : " << e_point << std::endl;
	std::cout << "damage : " << damage << std::endl;
}
std::string FragTrap::getName() const
{
	return this->Name;
}
int FragTrap::getHitPoint() const
{
	return this->h_point;
}
int FragTrap::getEnePoint() const
{
	return this->e_point;
}
int FragTrap::getDamage() const
{
	return this->damage;
}