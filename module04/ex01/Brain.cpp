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
	*this = src;
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

void	copy_ideas(std::string *dest, const std::string *src)
{
	for (int i = 0; i < 100; i++)
		dest[i] = src[i];
}

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		copy_ideas(ideas, rhs.ideas);
	}
	return *this;
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