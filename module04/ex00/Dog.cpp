#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Constructor Dog" << std::endl;
	_type = "Dog";
}

Dog::Dog( const Dog & src ) : Animal(src)
{
	std::cout << "Constructor copy Dog" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Destructor Dog" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	this->_type = rhs.getType();
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Dog const & i )
// {
// 	o << i.getType();
// 	return o;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound(void) const{
	std::cout << "Waouff" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */