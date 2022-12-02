/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:22:43 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 11:57:06 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP
# define CLAP_TRAP

# include <iostream>

#define STANDARD 4294967295

class ClapTrap
{
protected: //changed with 00
	std::string Name;
	unsigned int h_point;
	unsigned int e_point;
	unsigned int damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(std::string n, int h, int e, int a);//changed with 00
	ClapTrap(const ClapTrap& forcpy);
	ClapTrap& operator = (const ClapTrap& forass);
	void	display();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap();
	std::string getName() const;
	int getHitPoint() const;
	int getEnePoint() const;
	int getDamage() const;
};

# endif