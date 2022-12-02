/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:44:55 by nhwang            #+#    #+#             */
/*   Updated: 2022/12/02 14:45:47 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND
# define EASYFIND

#include <exception>

template <typename T>
typename T::iterator easyfind(T arr, int n)
{
	typename T::iterator iter;
	iter = std::find(arr.begin(), arr.end(), n);
	if (iter==arr.end())
		throw std::exception();
	return iter;
}

# endif