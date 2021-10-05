#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Form* rrf1 = NULL;
	Form* rrf2 = NULL;
	Form* rrf3 = NULL;
	Form* rrf4 = NULL;

	Intern someRandomIntern;
	Bureaucrat*	bu;
	try{
		bu = new Bureaucrat("tom", 1);
	}
	catch (const std::exception& e)
	{
		std::cout<<e.what()<<std::endl;
		delete bu;
		return (1);
	}
	try{
		rrf1 = someRandomIntern.makeForm("shrubberry creation", "Bender");
		rrf2 = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf3 = someRandomIntern.makeForm("presidential pardon", "Bender");
		//rrf4 = someRandomIntern.makeForm("none", "Bender");
	}
	catch (const std::exception& e)
	{
		std::cout<<e.what()<<std::endl;
		delete rrf1;
		delete rrf2;
		delete rrf3;
		delete rrf4;
		return (1);
	}

	bu->executeForm(*rrf1);
	bu->executeForm(*rrf2);
	bu->executeForm(*rrf3);
	//bu->executeForm(*rrf4);
	delete rrf1;
	delete rrf2;
	delete rrf3;
	delete rrf4;
}