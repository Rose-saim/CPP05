#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestionForm.hpp"
#include <fstream>

class Intern
{
	public:
		Intern();
		Intern(Intern const& cpy);
		~Intern();
		std::string	getForm(int	i);
		Form	*formPresidential(std::string &target);
		Form	*formShruberry(std::string &target);
		Form	*formRobotmy(std::string &target);
		void	fillForm();
		Intern	&operator=(Intern const& cpy);
		Form	*makeForm(std::string form, std::string target);
		class NoFunc: public std::exception
		{
		public:
			virtual const char *what()const throw()
			{
				return("This function does not exist !");
			}
		};
};

#endif