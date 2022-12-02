/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:53:36 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 13:22:00 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("No_name", 100, 50, 20) //생성자 순서 논리 다시 공부
{
	std::cout << "---------ST - Constructor called---------" << std::endl;
	this->h_point = 100;
	this->e_point = 50;
	this->damage = 20;
	display();
	std::cout << "-----------------------------------------" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "---------ST - Constructor called---------" << std::endl;
	display();
	std::cout << "-----------------------------------------" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << Name + " : ST - copy constructor called" << std::endl; //바꾸기 전 이름 >> 생성자이기 떄문에 무명일것.
	*this = copy;
}
ScavTrap& ScavTrap::operator = (const ScavTrap& ass)
{
	std::cout << Name + " : ST - copy assignment called" << std::endl; //바꾸기 전 이름 >> 생성자이기 떄문에 무명일것.
	if (this == &ass)
		return *this;
	Name = ass.getName();
	h_point = ass.getHitPoint();
	e_point = ass.getEnePoint();
	damage = ass.getDamage();
	return *this;
}
ScavTrap::~ScavTrap()
{
	std::cout <<"ST-"<< Name << " : is Off" << std::endl;
}
void	ScavTrap::guardGate()
{
//This member function will display a message informing that ScavTrap is now in Gate keeper mode.
	if (!h_point || !e_point)
	{
		std::cout << "turned off this ScavTrap : " + Name << std::endl;
		return;
	}
	std::cout << "ScavTrap-" + Name + ": is now in Gate keeper mode." << std::endl;
}
void ScavTrap::attack(const std::string& target)
{
	//ClapTrap name attacks target, causing damage points of damage!
	if (!h_point || !e_point)
	{
		std::cout << "turned off this ScavTrap : " + Name << std::endl;
		return;
	}
	std::cout << "ScavTrap " + Name + " attacks " + target + ", causing " << damage << " points of damage!" << std::endl;
	e_point--;
}
void ScavTrap::display()
{
	std::cout << "name : " << Name << std::endl;
	std::cout << "h_point : " << h_point << std::endl;
	std::cout << "e_point : " << e_point << std::endl;
	std::cout << "damage : " << damage << std::endl;
}
std::string ScavTrap::getName() const
{
	return this->Name;
}
int ScavTrap::getHitPoint() const
{
	return this->h_point;
}
int ScavTrap::getEnePoint() const
{
	return this->e_point;
}
int ScavTrap::getDamage() const
{
	return this->damage;
}