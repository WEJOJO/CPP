/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:25:15 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/01 21:25:16 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string str)
{
	type = str;
}

const std::string & Weapon::getType()
{
	return type;
}

void Weapon::setType(std::string str)
{
	type = str;
}

Weapon::~Weapon()
{
}
