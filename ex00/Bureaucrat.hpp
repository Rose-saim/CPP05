#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		int grade;
		std::string name;
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		virtual ~Bureaucrat();
		void	Increment();
		void	Decrement();
		void	CheckGrade(int grade);
		Bureaucrat &operator=(Bureaucrat const &copy);
		std::string	GetName()const;
		int	GetGrade()const;

		class GradeTooHighException: public std::exception
		{
		public:
			virtual const char *what()const throw();
		};
		class GradeTooLowException: public std::exception
		{
		public:
			virtual const char *what()const throw();
		};	
};

std::ostream &operator<<(std::ostream os, Bureaucrat const &element);

#endif