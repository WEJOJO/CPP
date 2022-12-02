#include <string>
#include <iostream>

class Harl
{
private:
	void (Harl::*f[4])();
	std::string	arr[4];
	void debug()
	{
		std::cout << "[ DEBUG ]" << std::endl;
		std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
	}
	void info( void )
	{
		std::cout << "[ INFO ]" << std::endl;
		std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
	}
	void warning( void )
	{
		std::cout << "[ WARNING ]" << std::endl;
		std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
	}
	void error( void )
	{
		std::cout << "[ ERROR ]" << std::endl;
		std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
	}
public:
	Harl()
	{
		f[0]=&Harl::debug;
		f[1]=&Harl::info;
		f[2]=&Harl::warning;
		f[3]=&Harl::error;
		arr[0] = "DEBUG";
		arr[1] = "INFO";
		arr[2] = "WARNING";
		arr[3] = "ERROR";
	}
	void complain(std::string level) //std::string level
	{
		int c;

		c = 0;
		while(c < 4)
		{
			if (arr[c]==level)
				break ;
			c++;
		}
		if (c==4)
		{
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			return ;
		}
		for (int i = c; i < 4; i++)
			(this->*f[i])();
	}
	~Harl()
	{
	}
};

int main(int argc, char *argv[])
{
	Harl test;
	std::string str;

	if (argc != 2)
	{
		std::cout << "[ Complain only once  in one time ]\n";
		return 1;
	}
	str = argv[1];
	test.complain(str);
}

//harlFilter로 만들것