/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:22:36 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/23 14:29:37 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a; //무명
	std::string tmp = "nhwang";
	std::string tgt = "ttttt";

	ClapTrap b(tmp);
	std::cout << "======================cpy/ass test======================" << std::endl;
	ClapTrap cpytest(b);
	ClapTrap asstest;
	asstest = b;
	std::cout << "========================================================" << std::endl;

	a.attack(tgt);
	b.attack(tgt);
	b.takeDamage(3);
	b.display();
	b.beRepaired(20);
	b.display();
	std::cout << "======================Point test======================" << std::endl;
	////attack으로 포포인인트  소소모  후  어어택택, 리페어
	int i = 0;
	while(i < 10)
	{
		a.attack(tgt);
		i++;
	}
	a.display(); //fail
	a.beRepaired(100); //fail
	////리페어로 포포인인트  소소모  후  어어택택
	i = 0;
	while(i < 10)
	{
		b.beRepaired(10);
		i++;
	}
	b.attack(tgt);
	std::cout << "======================Damage test======================" << std::endl;
	ClapTrap c(tmp+"2");
	c.takeDamage(100);
	c.attack(tgt);
	c.beRepaired(1000);
	c.display();
	std::cout << "======================u_int test======================" << std::endl;
	ClapTrap u(tmp+"_u_int");
	u.takeDamage(4294967295);
	u.attack(tgt);
	u.beRepaired(4294967295);
	// u.takeDamage(0);///case-2
	// u.attack(tgt);///case-2
	// u.beRepaired(4294967295);///case-2
	// u.attack(tgt);//case-2

	//------
	u.display();
}
//4294967295