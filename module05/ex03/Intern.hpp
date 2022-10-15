#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		Form *makeForm(std::string form_name, std::string name);

		class NotFound: public std::exception {
			virtual const char* what() const throw();
		};

	private:

};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */