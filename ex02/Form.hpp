#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form
{
private:
	std::string const name;
	std::string  target;
	bool		toSigned;
	int	const		gradeSign;
	int	const		gradeExec;
public:
	Form(std::string name, std::string target, int gradeSign, int gradeExec);
	virtual ~Form();
	Form(Form const &copy);
	virtual void	beSigned(Bureaucrat const &bureaucrat);
	virtual void	checkGradeExecSign(int gradeExec, int gradeSign)const;	
	virtual void	execute(Bureaucrat const &executor)const;
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
	class NoSigned: public std::exception
	{
	public:
		virtual const char *what()const throw()
		{
			return("This form is not signed. Please come back when it's done.");
		}
	};	
	virtual bool	getSigned()const;
	virtual std::string	getName()const;
	virtual int		getGradeSign()const;
	virtual int		getGradeExec()const;
	virtual std::string	getTarget()const;
	virtual void	setTarget(std::string const target);
};


#endif