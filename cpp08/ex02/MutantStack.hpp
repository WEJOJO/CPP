/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:39:28 by nhwang            #+#    #+#             */
/*   Updated: 2022/12/02 14:39:29 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT
# define MUTANT

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::reverse_iterator r_iterator;
	MutantStack<T>::iterator begin()
	{
		return this->c.begin();
	}
	MutantStack<T>::iterator end()
	{
		return this->c.end();
	}
	MutantStack<T>::r_iterator rbegin()
	{
		return this->c.rbegin();
	}
	MutantStack<T>::r_iterator rend()
	{
		return this->c.rend();
	}
};

# endif