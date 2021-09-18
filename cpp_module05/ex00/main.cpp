#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat* b1 = NULL;
	Bureaucrat* b2 = NULL;
	try
	{
		b1 = new Bureaucrat("tom", 10);
		b2 = new Bureaucrat("james", 140);
		b1->incrementGrade(200);
		b2->decrementGrade(30);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete b1;
	delete b2;
	
	
	

}