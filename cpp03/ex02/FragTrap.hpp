/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:03:42 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 12:29:12 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP
# define FRAG_TRAP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(); //: ClapTrap("No_name", 100, 100, 30)
	FragTrap(std::string name);// : ClapTrap(name, 100, 100, 30)
	FragTrap(const FragTrap& copy);
	FragTrap& operator =(const FragTrap& ass);
	void highFivesGuys(void);
	~FragTrap();
	std::string getName() const;
	int getHitPoint() const;
	int getEnePoint() const;
	int getDamage() const;
};

# endif