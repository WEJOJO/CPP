/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:56:18 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/15 19:31:08 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	index = 0;
}

Contact::Contact(int ind)
{
	index = ind;

	std::cout << "fir_name?";
	std::getline(std::cin, f_name);
	std::cout << "last_name?";
	std::getline(std::cin, l_name);
	std::cout << "nick_name?";
	std::getline(std::cin, n_name);
	std::cout << "p_number?";
	std::getline(std::cin, p_num);
	std::cout << "secret?";
	std::getline(std::cin, secret);
}

void	Contact::ft_customout(std::string info)
{
	int			t;
	int			tlen;
	std::string temp;

	std::cout.width(10); //10칸 선정
	std::setw(10);
	tlen = info.length();
	if (tlen < 10)
		std::cout << info;
	else
	{
		t = 9;
		while(info[t])
		{
			temp += info[t]; //10번째 글자 이후부터 잠깐 떼어놓기
			t++;
		}
		int tt = 0;
		while(tt <= tlen-10) //10번째까지 pop
		{
			info.pop_back();
			tt++;
		}
		info+='.';
		std::cout << info;
		info.pop_back(); //. 빼기
	}
	info+=temp;
}

void	Contact::ft_travel()
{
	std::cout << std::setw(10) << index;
	std::cout << "|";
	ft_customout(f_name);
	std::cout << "|";
	ft_customout(l_name);
	std::cout << "|";
	ft_customout(n_name);
	std::cout << std::endl;
}

void	Contact::ft_contactinfo()
{
	std::cout << "first name : " << f_name << std::endl;
	std::cout << "last name : " << l_name << std::endl;
	std::cout << "nick name : " << n_name << std::endl;
	std::cout << "phone : " << p_num << std::endl;
	std::cout << "secret : " << secret << std::endl;
}

Contact::~Contact()
{
}
