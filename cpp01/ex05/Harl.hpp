/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:32:52 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/02 13:05:54 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <string>
#include <iostream>

class Harl
{
private:
	void (Harl::*f[4])();
	std::string	arr[4];
	void debug();
	void info( void );
	void warning( void );
	void error( void );
public:
	Harl();
	void complain(std::string level);
};

#endif