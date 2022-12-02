/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:22:43 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 12:43:02 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP
# define CLAP_TRAP

# include <iostream>

#define STANDARD 4294967295

class ClapTrap
{
private:
	std::string Name;
	unsigned int h_point; //
	unsigned int e_point; //
	unsigned int damage; ///

public:
	ClapTrap(); //: Name("No_name"), h_point(10), e_point(10), damage(0); //초기화 리스트 헤더로 뺀 경우 어떻게 되나 확인 필요함
	ClapTrap(std::string name);// : Name(name), h_point(10), e_point(10), damage(0);
	ClapTrap(const ClapTrap& forcpy);
	ClapTrap& operator = (const ClapTrap& forass);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void display();
	~ClapTrap();
	///
	std::string getName() const;
	int getHitPoint() const;
	int getEnePoint() const;
	int getDamage() const;
};

# endif