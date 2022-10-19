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

void	Span::addNumber(unsigned int n){
	if (_vector.size() + 1 > _size)
		throw std::length_error("Too many number in Span");
	_vector.push_back(n);
}

unsigned int	Span::longestSpan() const{
	if (_vector.size())
		throw std::length_error("There is no number in Span");
	return (*std::max_element(_vector.begin(), _vector.end()) - *std::min_element(_vector.begin(), _vector.end()));
}

unsigned int	Span::shortestSpan() const{
	if (!_vector.size())
		throw std::length_error("There is no number in Span");
	std::vector<int> cpy = _vector;
	std::sort(cpy.begin(), cpy.end());
	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */