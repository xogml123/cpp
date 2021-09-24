#include "MutantStack.hpp"
template <typename T, typename container>
MutantStack<T, container>::MutantStack()
{
}

template <typename T, typename container>
void	MutantStack<T, container>::pop()
{
	contents.pop_back();
}
template <typename T, typename container>
typename MutantStack<T, container>::value_type	MutantStack<T, container>::push()
{
	return contents.push_back();
}
template <typename T, typename container>
typename MutantStack<T, container>::const_reference	MutantStack<T, container>::top() const
{
	return contents.back();
}
template <typename T, typename container>
typename MutantStack<T, container>::size_type	MutantStack<T, container>::size()
{
	return contents.size();
}
template <typename T, typename container>
MutantStack<T, container>::~MutantStack()
{}
template <typename T, typename container>
typename MutantStack<T, container>::iterator	MutantStack<T, container>::begin()
{
	return contents.begin();
}
template <typename T, typename container>
typename MutantStack<T, container>::iterator	MutantStack<T, container>::end()
{
	return contents.end();
}