#include "ShrubberyCreationForm.hpp"

const std::string ShrubberyCreationForm::trees =
		"      /\\      \n"
		"     /\\*\\     \n"
		"    /\\O\\*\\    \n"
		"   /*/\\/\\/\\   \n"
		"  /\\O\\/\\*\\/\\  \n"
		" /\\*\\/\\*\\/\\/\\ \n"
		"/\\O\\/\\/*/\\/O/\\\n"
		"      ||      \n"
		"      ||      \n"
		"      ||      ";

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& scf)
:Form(scf)
, mTarget(scf.getTarget())
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
:Form("Shrubbery", 145, 137)
, mTarget(target)
{}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& scf)
{
	Form::operator=(scf);
	mTarget = scf.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)const
{
	std::string fileName = mTarget + "_shrubbery";
	std::ofstream os;
	
	if (!isExecutable(executor.getGrade()))
		throw GradeTooLowException();
	else
	{
		os.open(fileName);
		if (!os.is_open())
			return ;
		os<<trees<<std::endl;
		os.close();
	}
}

const std::string& ShrubberyCreationForm::getTarget() const
{
	return (mTarget);
} 

ShrubberyCreationForm::ShrubberyCreationForm()
{}