/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:49:51 by nhwang            #+#    #+#             */
/*   Updated: 2022/11/30 11:05:23 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion() {}

Conversion::~Conversion()
{
	std::cout << "Destructor Called" << std::endl;
}
Conversion::Conversion(const Conversion& cpy)
{
	std::cout << "cpy con's Called"<< std::endl;
	*this=cpy;
}
double Conversion::getTemp() const
{
	return temp;
}
char* Conversion::getEnd() const
{
	return end;
}
std::string Conversion::getArg() const
{
	return arg;
}
std::string Conversion::getTend() const
{
	return tend;
}
Conversion& Conversion::operator=(const Conversion& ass)
{
	if (this == &ass)
		return *this;
	temp = ass.getTemp();
	end = ass.getEnd();
	arg = ass.getArg();
	tend = ass.getTend();
	return *this;
}
Conversion::Conversion(char* tempval) //argv[1]
{
	std::cout << "Constructor Called" << std::endl;
	end = NULL;
	temp = std::strtod(tempval,&end);
	arg = tempval;
	tend = end;
}

int Conversion::isInDot(std::string arg)
{
	int i = 0;
	while(arg[i])
	{
		if (arg[i] == '.')
			return 1;
		i++;
	}
	return 0;
}

int Conversion::isDisplay(unsigned char c)
{
	if ((0<=c && c<=31) || c == 127 || c >= 128)
		return 0;
	return 1;
}

void Conversion::toChar()
{
	std::cout << "char: ";
	if (std::isnan(temp))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (temp == 0)
	{
		if (std::isdigit(arg[0]))
		{
			if ((tend.length()==1 && tend[0]=='f')|| tend.length()==0) //0f, 42f처리
			{
				if (tend[0]=='f' && !isInDot(arg))//42f
				{
					std::cout << "impossible" << std::endl;
					return ;
				}
				std::cout << "Non displayable" << std::endl;
			}
			else
				std::cout << "impossible" << std::endl;
		}
		else
		{
			if (arg.length()==1)
				std::cout << "\'" <<arg[0]<<"\'" << std::endl;
			else
				std::cout << "impossible" << std::endl;
		}
	}
	else
	{
		if ((tend.length()==1 && tend[0]=='f') || tend.length() == 0)
		{
			//버림처리 후 숫자 범위확인 범위내 있을 경우 아스키 출력
			if (tend[0]=='f' && !isInDot(arg))//42f
			{
				std::cout << "impossible" << std::endl;
				return ;
			}
			unsigned char tchar;
			tchar = static_cast<unsigned char>(temp);
			if (isDisplay(tchar))
			{
				std::cout <<"\'" << tchar << "\'" << std::endl;
			}
			else
				std::cout << "Non displayable" << std::endl;
		}
		else
		{
			std::cout << "impossible" << std::endl;
		}
	}
}

/////////////////////////////////////////////

int Conversion::isCharNum(char c)
{
	std::string nstring = "0123456789";
	int i = 0;
	while(nstring[i])
	{
		if (nstring[i] == c)
			return 0;
		i++;
	}
	return 1;
}

int Conversion::isNum(double dble, std::string tend, std::string arg)
{
	int stand = 0;
	if (arg[0]=='-')
		stand++;
	if (!std::isdigit(arg[stand]))
		return 0;
	if ((tend.length()==1 && tend[0]=='f') || tend.length()==0)
	{
		if (tend[0]=='f' && !isInDot(arg))//42f
			return 0 ;//
		if (dble == 0)
		{
			if(arg!="0f")
				return 1;
			return 0;
		}
		return 1;
	}
	return 0;
}

void Conversion::toInt()
{
	std::cout << "int: ";
	if (std::isnan(temp))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (arg.length()==1 && isCharNum(arg[0]))//////////////
	{
		std::cout << static_cast<int>(arg[0]) << std::endl;//
		return ;
	}
	if (isNum(temp, tend, arg))
	{
		int tint;
		tint = static_cast<int>(temp);
		if (tint == -2147483648 && temp < 0)
			temp = std::ceil(temp);///버리기로
		if (tint == -2147483648 && temp != tint) //static의 특성을 이용 temp >>> floor(temp)
		{
			std::cout << "impossible" << std::endl;
			return ;
		}
		std::cout << tint << std::endl;
	}
	else
	{
		std::cout << "impossible" << std::endl;
	}
}
/////////////////////////////////////////////
void Conversion::toFloat()
{
	std::cout.precision(INT_MAX);
	std::cout << "float: ";
	if (std::isnan(temp))
	{
		if (arg[0]=='-')
		{
			std::cout << "-nanf" << std::endl;
			return ;
		}
		std::cout << "nanf" << std::endl;
		return ;
	}
	if (std::isinf(temp))  /////if (std::isinf(static_cast<float>(temp)))
	{
		if (arg[0]=='-')
			std::cout << "-inff" << std::endl;
		else
			std::cout << "inff" << std::endl;
		return ;
	}
	if (arg.length()==1 && isCharNum(arg[0]))//////////////
	{
		std::cout << static_cast<int>(arg[0]) << ".0f" << std::endl;//
		return ;
	}
	if (isNum(temp, tend, arg))
	{
		float tdble;
		tdble = static_cast<float>(temp);//double >> float으로 변경
		double floordb;
		floordb = floor(tdble);
		if (std::isinf(tdble))
		{
			std::cout << tdble << "f" << std::endl;
			return ;
		}
		if (floordb==tdble)
		{
			std::cout << tdble << ".0f" << std::endl; ///.0f를 찍어야함. (e있는지 체크)
		}
		else
		{
			std::cout << tdble << "f" << std::endl; ///.0f를 찍어야함
		}
	}
	else
	{
		std::cout << "nanf" << std::endl;
	}
}
/////////////////////////////////////////////
void Conversion::toDouble()
{
	std::cout.precision(INT_MAX);
	std::cout << "double: ";
	if (std::isnan(temp))
	{
		if (arg[0]=='-')
		{
			std::cout << "-nan" << std::endl;
			return ;
		}
		std::cout << "nan" << std::endl;
		return ;
	}
	if (std::isinf(temp))  /////if (std::isinf(static_cast<float>(temp)))
	{
		if (arg[0]=='-')
			std::cout << "-inf" << std::endl;
		else
			std::cout << "inf" << std::endl;
		return ;
	}
	if (arg.length()==1 && isCharNum(arg[0]))//////////////
	{
		std::cout << static_cast<double>(arg[0]) << ".0" << std::endl;//
		return ;
	}
	if (isNum(temp, tend, arg))
	{
		//double >> float으로 변경
		long double floordb;
		floordb = floor(temp);
		if (std::isinf(temp))
		{
			std::cout << temp << std::endl;
			return ;
		}
		if (floordb==temp)
		{
			std::cout << temp << ".0" << std::endl;
		}
		else
			std::cout << temp << std::endl;
	}
	else
	{
		std::cout << "nan" << std::endl;
	}
}
