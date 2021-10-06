#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
	private:
		Span();
	public:
		Span(unsigned int n);
		Span(Span const &other);
		virtual ~Span();
		Span &operator=(Span const &other);

		void addNumber(int num);
		template<class T>
		void addNumber(T begin, T end)
		{
			if (vector.size() + std::distance(begin, end) > (unsigned long)n)
				throw OutLimitsException();
			vector.insert(vector.end(), begin, end);
		}
		long shortestSpan();
		long longestSpan();
		class OutLimitsException: public std::exception {
			const char* what() const throw();
		};
		class NoSpanException: public std::exception {
			const char* what() const throw();
		};
	private:
		int n;
		std::vector<int> vector;
};

#endif
