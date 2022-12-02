/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:22:46 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/23 19:26:47 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : Name("No_name"), h_point(10), e_point(10), damage(0)
{
	std::cout << "---------CT - Constructor called---------" << std::endl;
	display();
	std::cout << "------------------------------------" << std::endl;

}
ClapTrap::ClapTrap(std::string name) : Name(name), h_point(10), e_point(10), damage(0)
{
	std::cout << "---------CT - Constructor called---------" << std::endl;
	display();
	std::cout << "------------------------------------" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& forcpy)
{
	std::cout << Name + " : CT - copy constructor called" << std::endl; //바꾸기 전 이름 >> 생성자이기 떄문에 무명일것.
	*this = forcpy;
}
ClapTrap& ClapTrap::operator = (const ClapTrap& forass)
{
	std::cout << Name + " : CT - copy assignment called" << std::endl; //바꾸기 전 이름
	if (this == &forass)
		return *this;
	Name = forass.getName();
	h_point = forass.getHitPoint();
	e_point = forass.getEnePoint();
	damage = forass.getDamage();
	return *this;
}
void ClapTrap::attack(const std::string& target)
{
	//ClapTrap name attacks target, causing damage points of damage!
	if (!h_point || !e_point)
	{
		std::cout << "turned off this ClapTrap : " + Name << std::endl;
		return;
	}
	std::cout << "ClapTrap " + Name + " attacks " + target + ", causing " << damage << " points of damage!" << std::endl;
	e_point--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (!h_point || !e_point)
	{
		std::cout << "turned off this ClapTrap : " + Name << std::endl;
		return;
	}
	std::cout << "ClapTrap " + Name + " takeDamage " << amount << " points!" << std::endl;
	if (h_point < amount)
		h_point = 0;
	else
		h_point-=amount;
}

ClapTrap::ClapTrap(std::string n, int h, int e, int a) : Name(n), h_point(h), e_point(e), damage(a)//changed with 00
{
	std::cout << "---------CT-Constructor called---------" << std::endl;
	display();
	std::cout << "------------------------------------" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!h_point || !e_point)
	{
		std::cout << "turned off this ClapTrap : " + Name << std::endl;
		return;
	}
	std::cout << "ClapTrap " + Name + " repaired " << amount << " points!" << std::endl;
	if ((STANDARD - h_point) < amount)
		h_point = STANDARD;
	else
		h_point+=amount;
	e_point--;
}

void ClapTrap::display()
{
	std::cout << "name : " << Name << std::endl;
	std::cout << "h_point : " << h_point << std::endl;
	std::cout << "e_point : " << e_point << std::endl;
	std::cout << "damage : " << damage << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout <<"CT : "<< Name << " : is Off" << std::endl;
}
std::string ClapTrap::getName() const
{
	return this->Name;
}
int ClapTrap::getHitPoint() const
{
	return this->h_point;
}
int ClapTrap::getEnePoint() const
{
	return this->e_point;
}
int ClapTrap::getDamage() const
{
	return this->damage;
}