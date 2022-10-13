#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("name"), _grade_sign(1), _grade_exec(1)
{
	_signed = false;
}

Form::Form(std::string name, int signe, int exec) : _name(name), _grade_sign(signe), _grade_exec(exec)
{
	_signed = false;
}

Form::Form( const Form & src ) : _name(src.getName()), _grade_sign(src.getGradeSign()), _grade_exec(src.getGradeExec())
{
	_signed = src.isSigned();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << " | signed  : " << i.isSigned() << " | exec grade : " << i.getGradeExec() << " | sign grade : " << i.getGradeSign();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


const std::string Form::getName() const{
	return (_name);
}

bool		Form::isSigned() const{
	return (_signed);
}

int			Form::getGradeSign() const{
	return (_grade_sign);
}

int			Form::getGradeExec() const{
	return (_grade_exec);
}

void		Form::beSigned(Bureaucrat bureaucrat){
	if (isSigned())
		std::cerr << getName() << " Form is already signed" << std::endl;
	else if (bureaucrat.getGrade() <= _grade_sign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/*
** --------------------------------- Exceptions ---------------------------------
*/

const char* Form::GradeTooHighException::what() const throw()
{
	return "The grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "The grade is too low";
}

/* ************************************************************************** */