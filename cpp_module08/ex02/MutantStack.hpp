#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP


#include <vector>
#include <deque>

template <
	typename T,
	typename Container = std::deque<T>
	>
class MutantStack{
	typdef Container container_type;
	typdef Container::value_type value_type;
	typdef Container::size_type size_type;
	typdef Container::reference reference;
	typdef Container::const_reference const_reference;
	typdef Container::iterator iterator;

	public:
		MutantStack();
		void	pop();
		typename value_type	push();
		typename const_reference	top() const;
		typename size_type	size();
		typename iterator	begin();
		typename iterator	end();
		virtual ~MutantStack();
	private:
		container_type contents;
};

#endif