/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:53:32 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 13:20:06 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP
# define SCAV_TRAP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();// : ClapTrap("No_name", 100, 50, 20)
	ScavTrap(std::string name);// : ClapTrap(name, 100, 50, 20)
	ScavTrap(const ScavTrap& copy);
	ScavTrap& operator = (const ScavTrap& ass);
	~ScavTrap();
	void	guardGate();
	void attack(const std::string& target); ///
	void display();
	std::string getName() const;
	int getHitPoint() const;
	int getEnePoint() const;
	int getDamage() const;
};

# endif
