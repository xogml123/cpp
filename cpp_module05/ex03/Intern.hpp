#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include <string>
class Form;
class Intern{
	typedef Form* (*makeF)(const std::string&);

	public:
		Intern();
		Intern(const Intern& it);
		Intern& operator=(const Intern& it);
		~Intern();
		Form*	 makeForm(const std::string& formName, const std::string& target) const;
		class BadFormNameException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Form name is unknown";
				}
		};
	private:
		static Form*	makeShrubbery(const std::string& target);
		static Form*	makeRobotomy(const std::string& target);
		static Form*	makePresidential(const std::string& target);
		static const std::string formNames[];
		static const makeF forms[];
};

#endif