/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:25:18 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/01 21:25:19 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon();
	Weapon(std::string str);
	const std::string &getType();
	void setType(std::string str);
	~Weapon();
};

#endif