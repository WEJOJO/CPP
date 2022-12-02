/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:32:21 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/16 15:39:39 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <istream>

int main (int argc, char *argv[])
{
	std::string myText;
	std::string filename;
	std::string outfilename;
	std::string all;
	std::size_t found;
	std::string str1;
	std::string str2;

	if (argc!=4)
	{
		std::cout << "Arg must 3";
		return 1;
	}
	str1 = argv[2];
	str2 = argv[3];
	filename = argv[1];
	std::ifstream MyReadFile(filename);
	outfilename = filename+=".replace";
	std::ofstream MyFile(outfilename);
	all = "";
	int i;
	int ll = str1.length();
	int l2 = str2.length();
	while (getline(MyReadFile, myText, '\0')) //option >> default == \n 포함x
	{
		i = 0;
		found = 0;
		while(found < myText.length())
		{
			found = myText.find(str1,found);
			if (found!=std::string::npos) //eof
			{
				myText.insert(found,str2);
				found+=l2;
				myText.erase(found,ll);
			}
		}
		all=all+myText;
	}
	if (all.length() == 0)
	{
		std::cout << "File size must bigger than 0";
		return 1;
	}
	// std::cout << all;
	MyFile << all;
	MyReadFile.close();
	MyFile.close();
	return 0;
}