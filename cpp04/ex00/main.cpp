/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:15:32 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:15:33 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	meta->makeSound();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	std::cout << "=============Wrong TEST============="<< std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* i2 = new WrongCat();
	meta2->makeSound();
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound(); //will output the wrong cat sound!


	std::cout <<"=====================================" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete meta2;
	delete i2;

	// system("leaks ex00");
	return 0;
}