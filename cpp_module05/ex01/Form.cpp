#include "Form.hpp"

Form::Form(const std::string& name, int gradeSign, int gradeExecute)
:mName(name)
, mSigned(false)
, mGradeSign(gradeSign)
, mGradeExecute(gradeExecute)
{
	if ((isValidGrade(gradeSign) == 1) || (isValidGrade(gradeExecute) == 1))
		throw GradeTooHighException();
	else if ((isValidGrade(gradeSign) == -1) || (isValidGrade(gradeExecute) == -1))
		throw GradeTooLowException();
	if (gradeSign < gradeExecute)
		throw GradeTooLowException();
}

Form::Form(const Form& form)
: mName(form.getName())
, mGradeSign(form.getGradeSign())
, mGradeExecute(form.getGradeExecute())
{
	*this = form;
}
Form& Form::operator=(Form const& form)
{
	mSigned = form.getSigned();
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

bool		Form::getSigned() const
{
	return (this->mSigned);
}

void		Form::beSigned(const Bureaucrat& bu)
{
	if (bu.getGrade() <= mGradeSign)
		mSigned = true;
	else
		throw GradeTooLowException();
}

int Form::isValidGrade(int grade)
{
	if (grade >= 1 && grade <= 150)
		return (0);
	else if (grade > 150)
		return (-1);
	else
		return (1);
}

std::ostream& operator<<(std::ostream& os, Form const& form) 
{
	os << form.getName();
	return os;
}

Form::Form()
:mGradeSign(0)
, mGradeExecute(0)
{}
