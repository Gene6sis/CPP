#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Constructor Cat" << std::endl;
	_type = "Cat";
}

Cat::Cat( const Cat & src ) : Animal(src)
{
	std::cout << "Constructor copy Cat" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Destructor Cat" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	this->_type = rhs.getType();
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Cat const & i )
// {
// 	o << i.getType();
// 	return o;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound(void) const{
	std::cout << "Miaou" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */