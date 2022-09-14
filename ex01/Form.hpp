#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form
{
private:
	std::string const name;
	bool		toSigned;
	int	const		gradeSign;
	int	const		gradeExec;
public:
	Form(std::string name, int gradeSign, int gradeExec);
	~Form();
	Form(Form const &copy);
	void	beSigned(Bureaucrat const &bureaucrat);
	bool	getSigned()const;
	std::string	getName()const;
	int		getGradeSign()const;
	int		getGradeExec()const;
	void	checkGradeExecSign(int gradeExec, int gradeSign)const;	
	Form	&operator=(Form const &copy);
	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char *what()const throw()
		{
			return("Grade of sign or exec is to high !");
		}
	};
	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char *what()const throw()
		{
			return("Grade of sign or exec is to low !");
		}
	};	
};


#endif