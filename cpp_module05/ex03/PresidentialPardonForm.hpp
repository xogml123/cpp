#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <string>
#include <iostream>
#include <fstream>
class PresidentialPardonForm : public Form{
	public:
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& scf);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& scf);
		virtual ~PresidentialPardonForm();
		void execute(Bureaucrat const & executor);
		const std::string& getTarget() const; 
	private:
		std::string mTarget;
		PresidentialPardonForm();
};

#endif