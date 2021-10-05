#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int	main()
{
	Bureaucrat* b1 = NULL;
	Form* f1 = NULL;
	Form* f2 = NULL;
	Form* f3 = NULL;
	try
	{
		b1 = new Bureaucrat("tom",44);
		f1 = new ShrubberyCreationForm("tomForm");
		f2 = new RobotomyRequestForm("johnForm");
		f3 = new PresidentialPardonForm("jamesForm");
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	b1->executeForm(*f1);
	b1->executeForm(*f2);
	b1->executeForm(*f3);
	delete b1;
	delete f1;
	delete f2;
	delete f3;
	
	
	

}