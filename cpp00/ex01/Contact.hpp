/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:56:31 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/15 17:56:31 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string p_num;
	std::string secret;
	int			index;

public:
	Contact();
	Contact(int ind);
	void	ft_customout(std::string info);
	void	ft_travel();
	void	ft_contactinfo();
	~Contact();
};