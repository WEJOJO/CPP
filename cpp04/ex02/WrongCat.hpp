/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:16:04 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:16:05 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT
# define WRONG_CAT

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& cpy);
	WrongCat& operator =(const WrongCat& ass);
	~WrongCat();
	void makeSound() const;
	std::string getType() const;

};

# endif