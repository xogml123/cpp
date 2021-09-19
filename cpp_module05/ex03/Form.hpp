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
		virtual ~Form();
		std::string	getName() const;
		int			getGradeSign()const ;
		int			getGradeExecute()const ;
		bool		getSigned()const;
		void		beSigned(const Bureaucrat& bu);
		virtual void execute(Bureaucrat const & executor)const = 0;		
		class GradeTooHighException:public std::exception
		{
			public:
				GradeTooHighException()
				{}
				const char* what() const throw()
				{
					return ("GradeTooHighException");
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
					return ("GradeTooLowException");
				}
				~GradeTooLowException() throw(){} 
		};
	protected:
		const std::string mName;
		bool	mSigned;
		const int mGradeSign;
		const int mGradeExecute;
		int 	isValidGrade(int grade);
		bool	isExecutable(int grade) const;
		Form();
};

std::ostream& operator<<(std::ostream& os, Form const& form);


#endif