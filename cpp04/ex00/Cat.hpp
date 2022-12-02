/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:15:23 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:15:25 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
# define CAT

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat& cpy);
	Cat& operator =(const Cat& ass);
	~Cat();
	void makeSound() const;
	std::string getType() const;
};

# endif