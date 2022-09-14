#include "Form.hpp"

Form::Form(std::string name, std::string target, int gradeSign, int gradeExec): name(name), target(target), gradeSign(gradeSign), gradeExec(gradeExec), toSigned(false)
{
	checkGradeExecSign(gradeExec, gradeSign);
	std::cout << COLOR(GREEN, "Constructor is called ")<<  COLOR(GREEN,name) << std::endl;
}

Form::Form(Form const &copy): name(copy.name), gradeExec(copy.gradeSign), gradeSign(copy.gradeSign), toSigned(false)
{
	std::cout << COLOR(GREEN, "Copy constructor is called ")<<  COLOR(GREEN, name) << std::endl;
}

void	Form::checkGradeExecSign(int gradeExec, int gradeSign)const
{
	if (gradeExec < 1 || gradeSign < 1)
		throw (Form::GradeTooHighException());	
	if (gradeExec > 150 || gradeSign > 150)
		throw (Form::GradeTooLowException());
}


Form::~Form()
{
	std::cout << "Destructor is called"<< name << std::endl;
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	try
	{
		if (bureaucrat.GetGrade() <= this->gradeSign)
		{
			this->toSigned = true;
			std::cout << COLOR(GREEN, bureaucrat.GetName()) << COLOR(GREEN, " signed ") << COLOR(GREEN, name) << std::endl;
		}
		else
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

std::string	Form::getName()const
{
	return (this->name);
}

std::string	Form::getTarget()const
{
	return (this->target);
}

void	Form::setTarget(std::string const target)
{
	this->target = target;
}


bool	Form::getSigned()const
{
	return (this->toSigned);
}

int	Form::getGradeSign()const
{
	return (this->gradeSign);
}

int	Form::getGradeExec()const
{
	return (this->gradeExec);
}

Form	&Form::operator=(Form const &copy)
{
	this->toSigned = copy.toSigned;
	return (*this);
}

void	Form::execute(Bureaucrat const &executor)const
{
	try
	{
		if (this->getSigned() == true)
		{
			std::cout << COLOR(GREEN, "This form is signed.") << std::endl;
			std::cout << COLOR(GREEN, "Do you have the rank to execute it ?") << std::endl;
			executor.executeForm(*this);
		}
		else
			throw NoSigned();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}