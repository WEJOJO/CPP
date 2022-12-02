/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:25:01 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/01 21:31:14 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon *w;
public:
	HumanA(std::string n, Weapon &weapon);
	void attack();
	~HumanA();
};

#endif