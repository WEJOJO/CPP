#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	{
		std::cout << "============" << std::endl;
		Bureaucrat a("test");
		PresidentialPardonForm b("target1");
		a.executeForm(b);
		a.signForm(b);
		std::cout << "============" << std::endl;

		Bureaucrat c("test2",20);
		Bureaucrat d("test3",3);

		c.executeForm(b);
		c.signForm(b);
		c.executeForm(b);
		d.executeForm(b);
		std::cout << "============" << std::endl;
		// Form b("nhwang", 30,30);
		// a.signForm(b);
	}
	{
		std::cout << "====================================" << std::endl;

		Bureaucrat a("nhwang",1);
		RobotomyRequestForm b("testrobo");
		RobotomyRequestForm c("testrobo2");
		RobotomyRequestForm d("testrobo3");
		a.signForm(b);
		a.signForm(c);
		a.signForm(d);
		a.executeForm(b);
		a.executeForm(c);
		a.executeForm(d);

		std::cout << "=======================================" << std::endl;

	}
	{
		Bureaucrat a("nhwang",1);
		ShrubberyCreationForm b("test");
		std::cout << "============" << std::endl;
		a.executeForm(b);
		a.signForm(b);
		a.executeForm(b);
		std::cout << "============" << std::endl;

	}
}



	// std::cout << "------------Bureaucrat Basic--------------" << std::endl;
	// try ///생성자 속에 throw가 있기 때문에 main에 추가
	// {
	// 	Bureaucrat a;
	// 	std::cout << a << std::endl;
	// 	Bureaucrat b("test1");
	// 	std::cout << b << std::endl;
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
	// 	Bureaucrat c;
	// 	std::cout << c << std::endl;
	// 	int i = 0;
	// 	while(i < 100)
	// 	{
	// 		std::cout << "=========================" << std::endl;
	// 		c.Decrement();
	// 		std::cout << c << std::endl;
	// 	}
	// }
	// catch(Bureaucrat::GradeTooHighException e) //무시되는 것 확인 위해 일부러 순서에 차이를 둠
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(Bureaucrat::GradeTooLowException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(...)
	// {
	// 	std::cout << "Other Except" << std::endl;
	// }

	// std::cout << "!------------Increment CASE------------!" << std::endl;
	// try ///생성자 속에 throw가 있기 때문에 main에 추가
	// {
	// 	Bureaucrat d("nhwang");
	// 	std::cout << d << std::endl;
	// 	int i = 0;
	// 	while(i < 100)
	// 	{
	// 		std::cout << "=========================" << std::endl;
	// 		d.Increment();
	// 		std::cout << d << std::endl;
	// 	}
	// }
	// catch(Bureaucrat::GradeTooLowException e) //무시되는 것 확인 위해 일부러 순서에 차이를 둠
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(Bureaucrat::GradeTooHighException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(...)
	// {
	// 	std::cout << "Other Except" << std::endl;
	// }
	// std::cout << "===============END CASE================" << std::endl;