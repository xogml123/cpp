#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try{
		Bureaucrat bu("tom", 1);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubberry creation", "Bender");
		bu.executeForm(*rrf);
		delete rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		bu.executeForm(*rrf);
		delete rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		bu.executeForm(*rrf);
		delete rrf;
		rrf = someRandomIntern.makeForm("none", "Bender");
		bu.executeForm(*rrf);
		delete rrf;
	}
	catch (const std::exception& e)
	{
		std::cout<<e.what()<<std::endl;
	}
	
	

}