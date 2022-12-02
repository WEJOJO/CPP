#include "Bureaucrat.hpp"

int main()
{
	std::cout << "------------Bureaucrat Basic--------------" << std::endl;
	Bureaucrat a;
	std::cout << a << std::endl;
	Bureaucrat b("test1");
	std::cout << b << std::endl;
	Bureaucrat c;
	std::cout << c << std::endl;
	int i = 0;
	std::cout << "\n !------------Decrement CASE------------! \n" << std::endl;
	while(i < 76)
	{
		std::cout << "=========================" << std::endl;
		c.Decrement();
		std::cout << c << std::endl;
		i++;
	}
	std::cout << "\n !------------Increment CASE------------! \n" << std::endl;
	Bureaucrat d("nhwang");
	std::cout << d << std::endl;
	i = 0;
	while(i < 76)
	{
		std::cout << "=========================" << std::endl;
		d.Increment();
		std::cout << d << std::endl;
		i++;
	}
}


	// try ///생성자 속에 throw가 있기 때문에 main에 추가
	// {
		// Bureaucrat a;
		// std::cout << a << std::endl;
		// Bureaucrat b("test1");
		// std::cout << b << std::endl;
	// }
	// catch(Bureaucrat::GradeTooHighException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(Bureaucrat::GradeTooLowException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(...)
	// {
	// 	std::cout << "Other Except" << std::endl;
	// }

	// std::cout << "!------------Decrement CASE------------!" << std::endl;
	// try ///생성자 속에 throw가 있기 때문에 main에 추가
	// {
		// Bureaucrat c;
		// std::cout << c << std::endl;
		// int i = 0;
		// while(i < 100)
		// {
		// 	std::cout << "=========================" << std::endl;
		// 	c.Decrement();
		// 	std::cout << c << std::endl;
	// 	}
	// }
	// catch(std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// // catch(Bureaucrat::GradeTooHighException &e) //무시되는 것 확인 위해 일부러 순서에 차이를 둠
	// // {
	// // 	std::cout << e.what() << std::endl;
	// // }
	// // catch(Bureaucrat::GradeTooLowException &e)
	// // {
	// // 	std::cout << e.what() << std::endl;
	// // }
	// // catch(...)
	// // {
	// // 	std::cout << "Other Except" << std::endl;
	// // }

	// // std::cout << "!------------Increment CASE------------!" << std::endl;
	// // try ///생성자 속에 throw가 있기 때문에 main에 추가
	// // {
	// // 	Bureaucrat d("nhwang");
	// // 	std::cout << d << std::endl;
	// // 	int i = 0;
	// // 	while(i < 100)
	// // 	{
	// // 		std::cout << "=========================" << std::endl;
	// // 		d.Increment();
	// // 		std::cout << d << std::endl;
	// // 	}
	// // }
	// // catch(Bureaucrat::GradeTooLowException &e) //무시되는 것 확인 위해 일부러 순서에 차이를 둠
	// // {
	// // 	std::cout << e.what() << std::endl;
	// // }
	// // catch(Bureaucrat::GradeTooHighException &e)
	// // {
	// // 	std::cout << e.what() << std::endl;
	// // }
	// // catch(...)
	// // {
	// // 	std::cout << "Other Except" << std::endl;
	// // }
	// std::cout << "===============END CASE================" << std::endl;