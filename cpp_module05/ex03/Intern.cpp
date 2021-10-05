#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
const Intern::makeF Intern::forms[] = {
	Intern::makeShrubbery,
	Intern::makeRobotomy,
	Intern::makePresidential
};

const std::string Intern::formNames[] = {
	"shrubberry creation",
	"robotomy request",
	"presidential pardon"
};
Intern::Intern()
{}
Intern::Intern(const Intern& it)
{
	*this = it;
}
Intern& Intern::operator=(const Intern& it)
{
	(void)it;
	return (*this);
}
Intern::~Intern()
{}

Form*	Intern::makeShrubbery(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}
Form*	Intern::makeRobotomy(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}
Form*	Intern::makePresidential(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}

Form*	 Intern::makeForm(const std::string& formName, const std::string& target) const
{
	Form* form = NULL;
	for (int i =0 ; i < 3; i++)
	{
		if (!formNames[i].compare(formName))
		{
			form = (forms[i])(target);
			std::cout<<"Intern creates "<<form->getName()<<std::endl;
			return (form);
		}
	}
	throw BadFormNameException();
}
