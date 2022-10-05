#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat( std::string name );
		Bureaucrat( std::string name , int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		// Bureaucrat &		operator=( Bureaucrat const & rhs );

		const std::string	getName() const;
		int					getGrade() const;

		void				decrease();
		void				decrease(int i);
		void				increase();
		void				increase(int i);

		// Exceptions
		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};

	private:
		std::string const	_name;
		int					_grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */