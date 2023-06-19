#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Constructor Cat" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat( const Cat & src ) : AAnimal(src)
{
	std::cout << "Constructor copy Cat" << std::endl;
	_brain = new Brain(*(src.getBrain()));
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete(_brain);
	std::cout << "Destructor Cat" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	this->_type = rhs.getType();
	this->_brain = new Brain(*(rhs.getBrain()));
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

Brain	*Cat::getBrain(void) const{
	return (_brain);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */