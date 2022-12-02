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
	void complain(std::string level); //std::string level
	~Harl();
};

#endif