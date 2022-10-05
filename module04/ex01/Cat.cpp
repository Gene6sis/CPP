#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Constructor Cat" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat( const Cat & src )
{
	std::cout << "Constructor copy Cat" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete brain;
	std::cout << "Destructor Cat" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
		brain = rhs.brain;
	}
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
	std::cout << "Cat sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */