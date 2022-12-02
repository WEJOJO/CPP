/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:53:32 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 12:27:25 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP
# define SCAV_TRAP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();// : ClapTrap("No_name", 100, 50, 20)
	ScavTrap(std::string name);// : ClapTrap(name, 100, 50, 20)
	ScavTrap(const ScavTrap& copy);
	ScavTrap& operator = (const ScavTrap& ass);
	~ScavTrap();
	void	guardGate();
	void attack(const std::string& target);
	std::string getName() const;
	int getHitPoint() const;
	int getEnePoint() const;
	int getDamage() const;
};

# endif
