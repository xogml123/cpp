#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include <string>

class Intern{
	public:
		Intern();
		Intern(const Intern& it);
		Intern& operator=(const Intern& it);
		~Intern();
		Form*	 makeForm(const std::string& formName, const std::string& target) const;
};

#endif