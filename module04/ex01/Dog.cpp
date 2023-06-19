#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Constructor Dog" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog( const Dog & src ) : Animal(src)
{
	_brain = new Brain(*(src.getBrain()));
	std::cout << "Constructor copy Dog" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete(_brain);
	std::cout << "Destructor Dog" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	this->_type = rhs.getType();
	this->_brain = rhs.getBrain();
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

Brain	*Dog::getBrain(void) const{
	return (_brain);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */