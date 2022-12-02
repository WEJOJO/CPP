/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:49:49 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/30 11:01:40 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION
# define CONVERSION

#include <iostream>
#include <cmath>
// #include <cctype>

class Conversion
{
private:
	double temp;
	std::string arg;
	char* end;
	std::string tend;
	Conversion();
public:
	~Conversion();
	Conversion(const Conversion& cpy);
	double getTemp() const;
	char* getEnd() const;
	std::string getArg() const;
	std::string getTend() const;
	Conversion& operator=(const Conversion& ass);
	Conversion(char* tempval);
	int isInDot(std::string arg);
	int isDisplay(unsigned char c);
	void toChar();
	int isCharNum(char c);
	int isNum(double dble, std::string tend, std::string arg);
	void toInt();
	void toFloat();
	void toDouble();
};

# endif