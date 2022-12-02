#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat a("nhwang");
	Form b("form-1", 30,30);
	Form c("form-2", 120,30);
	Form d("nothing",151,30);
	Form e("nothing2",31,0);
	Form f("nothing3",0,0);
	a.signForm(b);
	a.signForm(c);
	Bureaucrat g("nhwang2");
	int i = 0;
	while(i<50)
	{
		a.Increment();
		i++;
	}
	std::cout << a << std::endl;
	a.signForm(b);

	i = 0;
	while(i<50)
	{
		g.Decrement();
		i++;
	}
	std::cout << g << std::endl;
	g.signForm(c);
}