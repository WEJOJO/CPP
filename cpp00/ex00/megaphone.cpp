/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:24:51 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/16 12:09:55 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// $>./megaphone "shhhhh... I think the students are asleep..."
// SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
// $>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
// DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
// $>./megaphone
// * LOUD AND UNBEARABLE FEEDBACK NOISE *
// $>

#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	std::string	str;
	int			i;
	int			j;

	i = 1;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while(argv[i])
	{
		str = argv[i];
		j = 0;
		while(str[j])
		{
			std::cout << static_cast<char>(toupper(str[j]));
			j++;
		}
		i++;
	}
	std::cout << std::endl;
}