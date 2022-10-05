#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Constructor Dog" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog( const Dog & src )
{
	std::cout << "Constructor copy Dog" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete brain;
	std::cout << "Destructor Dog" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
		brain = rhs.brain;
	}
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
	std::cout << "Dog sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */