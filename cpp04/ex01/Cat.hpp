/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:17:47 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:17:48 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
# define CAT

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* brain;
public:
	Cat();
	Cat& operator =(const Cat& ass);
	Cat(const Cat& cpy);
	~Cat();
	void makeSound() const;
	std::string getType() const;
	Brain *getBrain() const;
	void testtest();//

};

# endif