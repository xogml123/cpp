#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <string>
#include <iostream>
#include <fstream>
class ShrubberyCreationForm : public Form{
	public:
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& scf);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& scf);
		virtual ~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;
		const std::string& getTarget() const; 
		const static std::string trees;
	private:
		std::string mTarget;
		ShrubberyCreationForm();
};

#endif