/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:52:20 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/15 20:37:08 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name ) //It must allocate N Zombie objects in a single allocation. ?? new 하나만 쓰라?
{
	Zombie*	arr;

	arr = new Zombie[N]; //디폴트 생성자가 없으면 이 부분이 에러난다
	int i = 0;
	while(i < N)
	{
		arr[i].name = name;
		std::cout << "index: " << i << std::endl;
		arr[i].announce();
		i++;
	}
	return arr;
}