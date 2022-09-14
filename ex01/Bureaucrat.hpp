#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

#define RST  "\x1B[0m"
#define RED  "\x1B[31m"
#define GRN  "\x1B[32m"
#define YEL  "\x1B[33m"
#define BLU  "\x1B[34m"
#define MAG  "\x1B[35m"
#define CYN  "\x1B[36m"
#define WHT  "\x1B[37m"

#define FRED "\x1b[41m"
#define FGRN "\x1b[1m"
#define FYEL YEL x RST
#define FBLU BLU x RST
#define FMAG MAG x RST
#define FCYN CYN x RST
#define FWHT WHT x RST

#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST
#define CYAN    "\033[36m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define COLOR(C, c) C << c << RESET

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