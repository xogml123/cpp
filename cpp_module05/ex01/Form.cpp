#include "Form.hpp"

Form::Form(const std::string& name, int grade)
:mName(name)
, mGrade(0)
{
	if (isValidGrade(grade) == 1)
		throw GradeTooHighException();
	else if (isValidGrade(grade) == -1)
		throw GradeTooLowException();
	mGrade=grade;
}

Form::Form(const Form& form)
: mName(form.getName())
{
	*this = form;
}
Form& Form::operator=(Form const& form)
{
	this->mGrade = form.getGrade();
	return (*this);
}
Form::~Form()
{}
std::string	Form::getName() const
{
	return (this->mName);
}
int			Form::getGradeSign() const
{
	return (this->mGradeSign);
}
int			Form::getGradeExecute() const
{
	return (this->mGradeExecute);
}

int Form::isValidGrade(int grade)
{
	if (grade >= 1 && grade <= 150)
		return (0);
	else if (grade > 150)
		return (1);
	else
		return (-1);
}

std::ostream& operator<<(std::ostream& os, const Form& Form)
{
	std::cout<<Form.getName()<<", Form grade "<<Form.getGrade()<<std::endl;
	return (os);
}
