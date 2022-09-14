#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Presidential Pardon", target, 25, 5)
{
	std::cout << "Constructeur Formulaire Presidential Pardon" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copy): Form(copy)
{
	std::cout << "Copy Constructeur Formulaire Presidential Pardon" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructeur Formulaire Presidential Pardon" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
	if (this != &copy)
		std::cout << "I can't create a copy." << std::endl;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor)const
{
	
	Form::execute(executor);
	if (this->getGradeExec() >= executor.GetGrade() && this->getSigned() ==true)
		std::cout << this->getTarget() << "execute Presidential pardon" << std::endl;
}
