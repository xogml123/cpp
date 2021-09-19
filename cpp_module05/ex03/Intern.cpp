#include "Intern.hpp"

Intern::Intern()
{}
Intern::Intern(const Inter& it)
{
	*this = it;
}
Intern& Intern::operator=(const Intern& it)
{
	(void)rhs;
	return (*this);
}
Intern::~Intern()
{}
Form*	 Intern::makeForm(const std::string& formName, const std::string& target) const
{
	Form* form = NULL;
	if (!formName.compare("robotomy request"))
	{}
	else if (!formName.compare("shrubberry creation"))
	{}
	else if (!formName.compare("presidential pardon"))
	{}
	else
}