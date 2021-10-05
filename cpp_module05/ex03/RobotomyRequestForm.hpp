#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include <string>
#include <iostream>
#include <fstream>
class RobotomyRequestForm : public Form{
	public:
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& scf);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& scf);
		virtual ~RobotomyRequestForm();
		void execute(Bureaucrat const & executor) const;
		const std::string& getTarget() const;
		class RobotomizedFailed: public std::exception {
		public:
			const char* what() const throw()
			{
				return "bzzz bzz robotomized failed";
			}
		};
	private:
		std::string mTarget;
		RobotomyRequestForm();
};

#endif