#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <iostream>

class Bureaucrat{
	public:
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& bureaucrat);
		Bureaucrat& operator=(Bureaucrat const& bureaucrat);
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade()const ;
		void		incrementGrade(int change);
		void		decrementGrade(int change);
		class GradeTooHighException:public std::exception
		{
			public:
				GradeTooHighException()
				{}
				const char* what() const _NOEXCEPT
				{
					return ("GradeTooHighException");
				}
				~GradeTooHighException() _NOEXCEPT{}
		};
		class GradeTooLowException:public std::exception
		{

			public:
				GradeTooLowException()
				{}
				const char* what() const _NOEXCEPT
				{
					return ("GradeTooLowException");
				}
				~GradeTooLowException() _NOEXCEPT{} 
		};
	private:
		const std::string mName;
		int mGrade;
		int isValidGrade(int grade);
	
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif