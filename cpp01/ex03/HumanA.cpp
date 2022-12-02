/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:24:58 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/16 13:00:17 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &weapon)
{
	name = n;
	w = &weapon; //vs *w = weapon 왜 다른지 모르겠음. 포인터로 갖지 않으면 weapon이 스스로 값을 바꿀 때 그걸 가져오지 못하고있다. 이유는? //참조형이라 할 지라도 복사를 하고 있는건가? 그러면 operator를 잘 만들어준다면 해결이 될지??
	//헤더에서 참조형을 가질수 있다면?
}
void HumanA::attack()
{
	std::cout << name << " attacks with their " << w->getType();
}
HumanA::~HumanA()
{
}