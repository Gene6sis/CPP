#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Constructor Brain" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "Constructor copy Brain" << std::endl;
	for(int i = 0; i < 100; i++)
		_ideas[i] = src.getIdea(i);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Destructor Brain" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::string Brain::getIdea(int i) const {
	return (_ideas[i]);
}

Brain &				Brain::operator=( Brain const & rhs )
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = rhs.getIdea(i);
	return *this;
}

void	Brain::setIdea(int i, std::string idea) {
	_ideas[i] = idea;
}

// std::ostream &			operator<<( std::ostream & o, Brain const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */