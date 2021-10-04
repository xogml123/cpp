#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat* b1 = NULL;
	Bureaucrat* b2 = NULL;
	try
	{
		b1 = new Bureaucrat("tom", 2);
		b2 = new Bureaucrat("james", 149);
		b1->incrementGrade();
		b2->decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete b1;
	delete b2;
	
	
	

}