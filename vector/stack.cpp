#include "stack.hpp"

Stack::Node::Node(Node* link, T const& s)
:prev(link), s(s)
{}

Stack::Stack()
:start(NULL, ""), current(start)
{}

Stack::~Stack()
{
	Node* temp;
	while (current != &start)
	{
		temp = current->prev;
		delete current;
		current=temp;
	}
}

void	Stack::push(T s)
{
	Node* newNode = new Node(current, s);
	current = newNode;
}

T Stack::pop();
{
	T temp = current->s;
	Node* next;

	if (is_empty)
		return ("");
	next = current->prev;
	delete current;
	current = next;
	return (temp);
}

T	Stack::peek()
{
	if (is_empty)
		return ("");
	else
		return (current->s);
}

bool	Stack::is_empty()
{
	return (current == &start);
}