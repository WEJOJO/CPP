/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:56:45 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/15 17:56:46 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
	int		index;
	int		size;
	int		oldest;
	Contact	m_contact[8];
public:
	PhoneBook();
	void	ft_add();
	void	ft_search();
};