#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& scf)
:Form(scf)
, mTarget(scf.getTarget())
{

}
PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
:Form("Presidential", 25, 5)
, mTarget(target)
{}


PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& scf)
{
	Form::operator=(scf);
	mTarget = scf.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	this->beSigned(executor);
	if (!isExecutable(executor.getGrade()))
		throw GradeTooLowException();
	else
	{
		std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox\n";
	}
}

const std::string& PresidentialPardonForm::getTarget() const
{
	return (mTarget);
} 

PresidentialPardonForm::PresidentialPardonForm()
{}