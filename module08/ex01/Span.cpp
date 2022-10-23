#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _size(0), _vector(0)
{
}

Span::Span(unsigned int size) : _size(size), _vector(0)
{
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_size = rhs._size;
		this->_vector = rhs._vector;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	unsigned int distance = std::distance(begin, end);
	if (_vector.size() + distance > _size)
		throw TooManyNumber();
	for (unsigned int i = 0; i < distance; i++)
	{
		_vector.push_back(*begin);
		begin++;
	}
}

void	Span::addNumber(int n){
	if (_vector.size() + 1 > _size)
		throw TooManyNumber();
	_vector.push_back(n);
}

unsigned int	Span::longestSpan() const{
	if (_vector.size() <= 1)
		throw NoNumber();
	return (*std::max_element(_vector.begin(), _vector.end()) - *std::min_element(_vector.begin(), _vector.end()));
}

unsigned int	Span::shortestSpan() const{
	if (_vector.size() <= 1)
		throw NoNumber();
	std::vector<int> cpy = _vector;
	std::sort(cpy.begin(), cpy.end());

	std::vector<int>::iterator a = cpy.begin();
	int	value = longestSpan();
	std::vector<int>::iterator it = ++cpy.begin();
	for (; it != cpy.end(); it++){
		if (*it - *a < value)
			value = *it - *a;
		a++;
	}
	return (value);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// const char* Span::NoNumber::what() const throw()
// {
// 	return "There is no number";
// }

// const char* Span::TooManyNumber::what() const throw()
// {
// 	return "There is too many number";
// }

/* ************************************************************************** */