/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:25:07 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/16 12:58:45 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *w;

public:
	// HumanB(std::string n, Weapon &weapon);
	HumanB(std::string n); //B의 경우 생성자 오버라이딩 하라는 의도가 맞는지?
	void attack();
	void setWeapon(Weapon &weapon);
	~HumanB();
};

#endif