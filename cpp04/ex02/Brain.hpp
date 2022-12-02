/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:17:42 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/24 17:17:43 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN
# define BRAIN

#include <iostream>
class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain& cpy);
	Brain& operator = (const Brain& ass);
	void showIdeas();
	std::string getIdea(int index) const;
	~Brain();
	Brain(std::string s);
};

# endif