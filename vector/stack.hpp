#ifndef STACK_HPP
# define STACK_HPP
#include <string>
template <typename T>
class Stack{
	struct Node{
		Node*	prev;
		T	s;

		Node(Node* link, T const& s);
	};
	private:
		Node	start;
		Node*	current;
		//끝을 나타내는 더미 노드
	public:
		Stack();
		~Stack();
		void	push(T s);
		T pop();
		T peek();
		bool	is_empty();

};
#endif