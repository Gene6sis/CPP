#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>


class Span
{

	public:

		Span();
		Span(unsigned int size);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );
		void	addNumber(unsigned int n);

		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

	private:
		unsigned int _size;
		std::vector<int> _vector;

};

#endif /* ************************************************************ SPAN_H */