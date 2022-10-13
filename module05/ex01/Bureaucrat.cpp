#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("Name")
{
	std::cout << "Constructor Bureaucrat " << _name << std::endl;
	_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name)
{
	std::cout << "Constructor name Bureaucrat " << _name << std::endl;
	_grade = 1;
}


Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Constructor grade Bureaucrat " << _name << std::endl;
	_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src.getName())
{
	std::cout << "Constructor copy Bureaucrat " << _name << std::endl;
	_grade = src.getGrade();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat " << _name << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
// {
// 	if ( this != &rhs )
// 	{
// 		// this->_name = rhs.getName();
// 		this->_grade = rhs->getGrade();
// 	}
// 	return *this;
// }

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

const std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

void	Bureaucrat::decrease(int i)
{
	std::cout << _name << " : " << _grade << std::endl;
	std::cout << _name << " decrease " << i << std::endl;
	std::cout << "Final grade : " << _grade + i << std::endl;
	if (_grade + i > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade += i;
}

void	Bureaucrat::decrease(void)
{
	decrease(1);
}

void	Bureaucrat::increase(int i)
{
	std::cout << _name << " : " << _grade << std::endl;
	std::cout << _name << " increase " << i << std::endl;
	std::cout << "Final grade : " << _grade - i << std::endl;
	if (_grade - i < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade -= i;
}

void	Bureaucrat::increase(void)
{
	increase(1);
}

/*
** --------------------------------- Exceptions ---------------------------------
*/

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "The grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "The grade is too low";
}

/* ************************************************************************** */