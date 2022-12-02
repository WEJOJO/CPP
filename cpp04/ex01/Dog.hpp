/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:17:53 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:17:54 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
# define DOG

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* brain;
public:
	Dog();
	Dog(const Dog& cpy);
	Dog& operator =(const Dog& ass);
	~Dog();
	void makeSound() const;
	std::string getType() const;
	Brain *getBrain() const;
};

# endif