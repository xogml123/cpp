#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>

class Form{
	public:
		Form(const std::string& name, int grade);
		Form(const Form& form);
		Form& operator=(Form const& form);
		~Form();
		std::string	getName() const;
		int			getGradeSign()const ;
		int			getGradeExecute()const ;

		
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
		const int mGradeSign;
		const int mGradeExecute;
		int isValidGrade(int grade);

};

#endif