/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:15:43 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:16:08 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL
# define WRONG_ANIMAL

# include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& cpy);
	WrongAnimal& operator =(const WrongAnimal& ass);
	~WrongAnimal();
	std::string getType() const;
	void makeSound() const; //부모-자식 타입 overide
};

# endif