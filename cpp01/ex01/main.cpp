/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:52:08 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/15 20:38:57 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *arr;
	Zombie z("abc");
	arr = z.zombieHorde(10,"horde");

	Zombie *horde = z.zombieHorde(3,"horde2");
	delete [] arr;
	delete [] horde;
}

