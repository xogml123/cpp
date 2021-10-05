#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat{
	public:
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& bureaucrat);
		Bureaucrat& operator=(Bureaucrat const& bureaucrat);
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade()const ;
		void		incrementGrade();
		void		decrementGrade();
		void 		signForm(Form& form);
		class GradeTooHighException:public std::exception
		{
			public:
				GradeTooHighException()
				{}
				const char* what() const throw()
				{
					return ("GradeTooHighException: Bureaucrat");
				}
				~GradeTooHighException() throw(){}
		};
		class GradeTooLowException:public std::exception
		{

			public:
				GradeTooLowException()
				{}
				const char* what() const throw()
				{
					return ("GradeTooLowException: Bureaucrat");
				}
				~GradeTooLowException() throw(){} 
		};
	private:
		Bureaucrat();
		const std::string mName;
		int mGrade;
		int isValidGrade(int grade);
	
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif