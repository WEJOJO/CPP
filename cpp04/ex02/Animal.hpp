/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:17:37 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:19:20 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
# define ANIMAL

# include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal& cpy);
	Animal& operator =(const Animal& ass);
	virtual ~Animal(); ///test without virtual
	std::string getType() const;
	virtual void makeSound() const = 0; //부모-자식 타입 overide
};

# endif