#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <exception>


class Span
{
	class NoNumber : public std::exception
	{
    	public:
        	virtual const char *what() const throw(){
        		return "There is not enough value to do a span !";
        	}
	};
	class TooManyNumber : public std::exception
	{
    	public:
        	virtual const char *what() const throw(){
        		return "There is enough value in this span !";
        	}
	};

	public:

		Span();
		Span(unsigned int size);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );
		void	addNumber(int n);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;


	private:
		unsigned int _size;
		std::vector<int> _vector;

};

#endif /* ************************************************************ SPAN_H */