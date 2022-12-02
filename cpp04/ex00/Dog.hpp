/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:15:29 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:15:30 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
# define DOG

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& cpy);
	Dog& operator =(const Dog& ass);
	~Dog();
	void makeSound() const;
	std::string getType() const;
};

# endif