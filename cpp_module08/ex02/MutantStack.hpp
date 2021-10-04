#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>{
	public:
		typedef T* iterator;
		MutantStack()
		: std::stack<T>::stack(){}
		MutantStack(const MutantStack& mustack)
		{*this = mustack;}
		MutantStack& operator=(const MutantStack& mustack)
		{
			for (iterator itr = mustack.begin(); itr != mustack.end(); itr++)
			{
				this->push(*itr);
			}
			return (*this);
		}
		iterator	begin()
		{
			return (&(this->top()) - (this->size() - 1));
		}
		iterator	end()
		{
			return (&(this->top()) + 1);
		}
		virtual ~MutantStack(){}
};

#endif