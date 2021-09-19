#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade)
:mName(name)
, mGrade(0)
{
	if (isValidGrade(grade) == 1)
		throw GradeTooHighException();
	else if (isValidGrade(grade) == -1)
		throw GradeTooLowException();
	mGrade=grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
: mName(bureaucrat.getName())
{
	*this = bureaucrat;
}
Bureaucrat& Bureaucrat::operator=(Bureaucrat const& bureaucrat)
{
	this->mGrade = bureaucrat.getGrade();
	return (*this);
}
Bureaucrat::~Bureaucrat()
{}
std::string	Bureaucrat::getName() const
{
	return (this->mName);
}
int			Bureaucrat::getGrade() const
{
	return (this->mGrade);
}
void		Bureaucrat::incrementGrade(int change)
{
	int grade = mGrade - change;
	if (isValidGrade(grade) == 1)
		throw GradeTooHighException();
	else if (isValidGrade(grade) == -1)
		throw GradeTooLowException();
	mGrade = grade;
}
void		Bureaucrat::decrementGrade(int change)
{
	int grade = mGrade + change;
	if (isValidGrade(grade) == 1)
		throw GradeTooHighException();
	else if (isValidGrade(grade) == -1)
		throw GradeTooLowException();
	mGrade = grade;
}

int Bureaucrat::isValidGrade(int grade)
{
	if (grade >= 1 && grade <= 150)
		return (0);
	else if (grade > 150)
		return (-1);
	else
		return (1);
}

void Bureaucrat::signForm(Form& form) const 
{
	if (form.getSigned() == true)
	{
		std::cout << *this << " signs " << form << std::endl;
	} 
	else
	{
		std::cout << *this << " cannot sign " << form
				  << " because grade is too low" << std::endl;
	}
}
Bureaucrat::Bureaucrat()
{}
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	std::cout<<bureaucrat.getName();
	return (os);
}
