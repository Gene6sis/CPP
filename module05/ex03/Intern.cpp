#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Intern const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

const char* Intern::NotFound::what() const throw()
{
	return "Form not found";
}

Form	*Intern::makeForm(std::string form_name, std::string name) {
	if (!form_name.compare("robotomy request"))
		return (new RobotomyRequestForm(name));
	else if (!form_name.compare("presidential pardon"))
		return (new PresidentialPardonForm(name));
	else if (!form_name.compare("shrubbery creation"))
		return (new ShrubberyCreationForm(name));
	std::cout << "Wrong Form name" << std::endl;
	throw Intern::NotFound();
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */