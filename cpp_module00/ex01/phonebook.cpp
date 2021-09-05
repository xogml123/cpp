#include "My_Awesome_PhoneBook.hpp"
#include "phonebook.hpp"

Phonebook::Phonebook()
:contacts_num(0)
{
}

Phonebook::~Phonebook()
{

}

int	Phonebook::phonebook_num() const
{
	return (contacts_num);
}

void	Phonebook::push(Contact& contact)
{
	contacts[contacts_num++] = contact;
}

void	Phonebook::show_all() const
{
	if (contacts_num == 0)
		std::cout<<"Phonebook is empty."<<std::endl;
	else
	{
		std::cout<<"|index     |first name|last name |nickname  |"<<std::endl;
		for (int i = 0; i < contacts_num;i++)
		{
			std::cout<< "|";
			std::cout<<std::setw(10)<<i + 1;
			std::cout<<"|";
			for (int j = 0; j < 3; j++)
			{
				if (contacts[i].at(j).length() > 10)
					std::cout<<contacts[i].at(j).substr(0, 9)<<".";
				else
					std::cout<<std::setw(10)<<contacts[i].at(j);
				std::cout<<"|";
			}
			std::cout<<std::endl;
		}

	}
}

void	Phonebook::input_index() const
{
	std::string	index_arr;
	int	index;

	std::cout<<"enter index ranged 0 to "<< contacts_num - 1<< " . : ";
	std::getline(std::cin, index_arr);
	if (unvalid_index_arr(index_arr))
	{
		std::cout<<"Wrong Index!"<<std::endl;
		return ;
	}	
	index = stoi(index_arr);
	if (index > 0 && index <= contacts_num)
		for (int i= 0;i < ATT_NUM;i++)
		{
			std::cout<<contacts[index - 1].metadata_at(i)<<" : ";
			std::cout<<contacts[index - 1].at(i)<<std::endl;
		}
	else
		std::cout<<"Index Out of Range."<<std::endl;
}
