#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "contact.hpp"

class Phonebook
{
	private:
		Contact contacts[8];
		int contacts_num;
	public:
		Phonebook();
		~Phonebook();
		int		phonebook_num() const;
		void	push(Contact& contact);
		void	show_all() const;
		void	input_index() const;
};
#endif