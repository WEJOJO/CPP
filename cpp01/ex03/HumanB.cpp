/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:25:04 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/16 13:04:10 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB(std::string n, Weapon &weapon)
// {
// 	name = n;
// 	w = &weapon;
// }
HumanB::HumanB(std::string n) //B의 경우 생성자 오버라이딩 하라는 의도가 맞는지?
{
	name = n;
}
void HumanB::attack()
{
	std::cout << name << " attacks with their " << w->getType();
}
void HumanB::setWeapon(Weapon &weapon)
{
	w = &weapon;
}
HumanB::~HumanB()
{
}
