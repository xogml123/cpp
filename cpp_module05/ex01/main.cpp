#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat* b1 = NULL;
	Form* f1 = NULL;
	try
	{
		b1 = new Bureaucrat("tom", 50);
		f1 = new Form("tom's Form", 40, 30);
		b1->signForm(*f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete b1;
	delete f1;
	

}