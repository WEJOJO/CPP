/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:25:11 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/16 13:01:08 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
	Weapon club = Weapon("crude spiked club\n");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club\n");
	// std::cout << club.getType();//
	// std::cout << bob.w.getType();
	bob.attack();
	}
	{
	Weapon club = Weapon("crude spiked club\n");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club\n");
	jim.attack();
	}
	return 0;
}