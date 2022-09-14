#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade)
{
	std::cout << "Constructor Create Bureaucrate: " << name << std::endl;
	std::cout << "Grade: " << grade << std::endl;
	CheckGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	std::cout << "Copy Constructor Create Bureaucrate: " << name << " Grade: " << grade << std::endl;
	this->name = copy.name;
	this->grade = copy.grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrate: " << this->name << ": " << this->grade << std::endl;
}

std::string Bureaucrat::GetName()const
{
	return (this->name);
}
int	Bureaucrat::GetGrade()const
{
	return (this->grade);
}

const char *Bureaucrat::GradeTooHighException::what()const throw()
{
	return("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what()const throw()
{
	return("Grade too low");
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &copy)
{
	this->grade = copy.grade;
	this->name = copy.name;
	return(*this);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &element)
{
	os << element.GetName() << ": his grade is " << element.GetGrade() << std::endl;
	return (os);
}

void	Bureaucrat::Increment()
{
	CheckGrade(grade - 1);
	this->grade-=1;
}

void	Bureaucrat::CheckGrade(int grade)
{

	std::cout << "Check Grade "<< std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::Decrement()
{
	CheckGrade(grade + 1);
	this->grade+=1;
}

void	Bureaucrat::executeForm(Form const& form)const
{
	try
	{
		if (this->GetGrade() > form.getGradeExec())
		{
			std::cout << "Unfortunately! You don't have the acess to run this form." << std::endl;
			throw GradeTooLowException();
		}
		else
			std::cout << "Great! Your rank is sufficient you can execute it." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
