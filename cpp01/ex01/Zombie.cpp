/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:52:14 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/15 20:38:15 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string	sname) ///name을 생성자로서 받는게 맞는지 아니면 cin으로 하라는건지 나와있지 않는데,,, 선택의 문제?
{
	name = sname;
	announce();
}

Zombie::Zombie(void) ///name을 생성자로서 받는게 맞는지 아니면 cin으로 하라는건지 나와있지 않는데,,, 선택의 문제?
{
}

Zombie::~Zombie()
{
	std::cout << name << " is dead" << std::endl;
}