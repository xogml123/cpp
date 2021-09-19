#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& scf)
:Form(scf)
, mTarget(scf.getTarget())
{

}
RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
:Form("Robotomy", 72, 45)
, mTarget(target)
{}


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& scf)
{
	Form::operator=(scf);
	mTarget = scf.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	this->beSigned(executor);
	if (!isExecutable(executor.getGrade()))
		throw GradeTooLowException();
	else
	{
		srand(time(NULL));
		if ((rand() % 2) % 2 == 0) {
		std::cout << "bzzz bzzz " << getTarget() << " has been robotomized successfully" << std::endl;
		} else {
		std::cout<< getTarget()<<" Robotomy Failure."<<std::endl;
	}
	}
}

const std::string& RobotomyRequestForm::getTarget() const
{
	return (mTarget);
} 

RobotomyRequestForm::RobotomyRequestForm()
{}