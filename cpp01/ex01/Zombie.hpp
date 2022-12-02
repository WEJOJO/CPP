/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:52:17 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/01 20:52:17 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	name;
public:
	void announce( void );
	Zombie(std::string	sname); ///name을 생성자로서 받는게 맞는지 아니면 cin으로 하라는건지 나와있지 않는데,,, 선택의 문제?
	Zombie(void); ///name을 생성자로서 받는게 맞는지 아니면 cin으로 하라는건지 나와있지 않는데,,, 선택의 문제?
	Zombie* newZombie( std::string name );
	void randomChump( std::string name );
	Zombie* zombieHorde( int N, std::string name ); //It must allocate N Zombie objects in a single allocation. ?? new 하나만 쓰라?
	~Zombie();
};

#endif