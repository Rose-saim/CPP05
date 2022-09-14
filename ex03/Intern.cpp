#include "Intern.hpp"

Intern::Intern()
{
	std::cout << COLOR(MAG, "Constructeur Formulaire intern") << std::endl;
}

Intern::Intern(Intern const& copy)
{
	std::cout << COLOR(MAG, "Copy Constructeur Formulaire intern") << std::endl;
}

Intern::~Intern()
{
	std::cout << COLOR(MAG, "Destructeur Formulaire intern") << std::endl;
}

Intern	&Intern::operator=(Intern const &copy)
{
	if (this != &copy)
		std::cout << COLOR(MAG, "I can't create a copy.") << std::endl;
	return (*this);
}

Form	*Intern::formPresidential(std::string &target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::formShruberry(std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::formRobotmy(std::string &target)
{
	return (new RobotomyRequestionFrom(target));
}


Form	*Intern::makeForm(std::string form, std::string target)
{		
	int	i = 0;
	enum	forms {PresidentialPardonForm, ShrubberyCreationForm, RobotomyRequestionForm};
	std::string	array[3]= {"PresidentialPardonForm", "ShrubberyCreationForm", "RobotomyRequestionForm"};

	while (i < 3)
	{
		if (array[i] == form)
			break ;
		++i;
	}
	try
	{
			switch (i)
			{
				case PresidentialPardonForm:
					return (formPresidential(target));
				case ShrubberyCreationForm:
					return (formShruberry(target));
				case RobotomyRequestionForm:
					return (formRobotmy(target));
				default:
					throw NoFunc();
			}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (NULL);
}
