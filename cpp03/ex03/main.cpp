/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:22:36 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 13:15:13 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// However, its constructors, destructor and attack() will print different messages.
// After all, ClapTraps are aware of their individuality
// ScavTrap will use the attributes of ClapTrap (update ClapTrap in consequence) and
// must initialize them to

//ㄴ> 방법1. 프로텍티드. 방법2 생성자를 다루는 방식 >>> 방법2같음.. 생성자 체인을 하라고 했으니....
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a;
	std::string tmp = "test222";
	//상속한 것 그대로 쓰고 오버라이딩하라는 내용없으므로 Scav로 출력하는게 맞을 것 같음
	a.whoAmI();
	a.attack(tmp); //Scav의 데미지 변경값이 나오는게 맞는 상황일까?? 확신없음. a의 포인트는 닳지  않고, 내내부의 scav가 닳아야하지 않을까생각함 상속했기 때문에
	a.takeDamage(10);
	a.beRepaired(20);
	a.display();
	std::cout << "------------------------------" << std::endl;
	DiamondTrap b(tmp);
	b.whoAmI();
	b.attack(tmp);
	b.takeDamage(10);
	b.beRepaired(20);
	b.display();
	std::cout << "------------------------------\n" << std::endl;


	std::cout << "======================Point test======================" << std::endl;
	int i = 0;
	DiamondTrap c;
	std::string tmp2 = "Diatest";
	std::string tgt = "Target";
	DiamondTrap d(tmp2);

	while(i++ < 50)
		c.attack(tgt);
	std::cout << "------end attack------" << std::endl;
	c.beRepaired(100);
	////리페어로 포포인인트  소소모  후  어어택택
	i = 0;
	while(i++ < 50)
		d.beRepaired(10);
	d.attack(tgt);
	std::cout << "======================Damage test======================" << std::endl;
	DiamondTrap t(tmp2+"2");
	t.takeDamage(100);
	t.attack(tgt);
	t.beRepaired(1000);
	t.display();
}




/// -------------다이아몬드 상속 문제의 간단한 예시-------------
// #include <iostream>

// class PoweredDevice
// {
// public:
// 	int a;
// 	PoweredDevice(int pow)
// 	{
// 		std::cout << "Powered : " << pow << std::endl;
// 		std::cout << &a << std::endl;
// 	}
// };

// class Scanner : virtual public PoweredDevice
// {
// public:
// 	Scanner(int scan, int pow) : PoweredDevice(pow)
// 	{
// 		std::cout << "Scanned : " << scan << std::endl;
// 	}
// };

// class Printer : virtual public PoweredDevice
// {
// public:
// 	Printer(int printer, int pow) : PoweredDevice(pow)
// 	{
// 		std::cout << "Printer : " << printer << std::endl;
// 	}
// };

// class Copier : public Scanner, public Printer
// {
// public:
// 	Copier(int scan, int printer, int pow) : Scanner(scan, pow), Printer(printer, pow), PoweredDevice(pow)
// 	{
// 	}
// };

// int main()
// {
// 	Copier cop(1,2,3);
// 	// std::cout << cop.Scanner::PoweredDevice::a << std::endl;

// }


//결국 같은 h_name등을 쓰지만 Dia의 경우에만 다르게 적용한다.