/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:22:36 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 12:04:57 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// However, its constructors, destructor and attack() will print different messages.
// After all, ClapTraps are aware of their individuality
// ScavTrap will use the attributes of ClapTrap (update ClapTrap in consequence) and
// must initialize them to

//ㄴ> 방법1. 프로텍티드. 방법2 생성자를 다루는 방식 >>> 방법2같음.. 생성자 체인을 하라고 했으니....

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "===================FragTest===================" << std::endl;

	FragTrap c;
	std::string tmp2 = "nhwang2";
	std::string tgt2 = "tttttt2";
	std::string tmp = "nhwang";
	std::string tgt = "ttttt";

	FragTrap d(tmp2);
	c.attack(tgt2);

	d.attack(tgt2);
	d.takeDamage(3); ///요구사항이 아니므로 CT로 띄우는게 맞음
	d.display();
	d.attack(tgt2); //오버라이딩 확인 ST >> 타입 아이디의 방식도 있긴함
	d.beRepaired(20);
	d.display();
	d.highFivesGuys();
	////attack으로 포포인인트  소소모  후  어어택택, 리페어
	int i = 0;
	std::cout << "======================Point test======================" << std::endl;
	while(i++ < 100)
		c.attack(tgt);
	c.beRepaired(100);
	////리페어로 포포인인트  소소모  후  어어택택
	i = 0;
	while(i++ < 100)
		d.beRepaired(10);
	d.attack(tgt);
	std::cout << "======================Damage test======================" << std::endl;
	FragTrap t(tmp+"3333");
	t.takeDamage(100);
	t.attack(tgt);
	t.beRepaired(1000);
	t.display();
}