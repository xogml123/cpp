#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	public:
		Form(const std::string& name, int gradeSign, int gradeExecute);
		Form(const Form& form);
		Form& operator=(Form const& form);
		~Form();
		std::string	getName() const;
		int			getGradeSign()const ;
		int			getGradeExecute()const ;
		bool		getSigned()const;
		void		beSigned(const Bureaucrat& bu);		
		class GradeTooHighException:public std::exception
		{
			public:
				GradeTooHighException()
				{}
				const char* what() const throw()
				{
					return ("GradeTooHighException: Form");
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
					return ("GradeTooLowException: Form");
				}
				~GradeTooLowException() throw(){} 
		};
	private:
		const std::string mName;
		bool	mSigned;
		const int mGradeSign;
		const int mGradeExecute;
		int isValidGrade(int grade);
		Form();

};

std::ostream& operator<<(std::ostream& os, Form const& form);


#endif