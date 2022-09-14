#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const& copy);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &copy);

		void	execute(Bureaucrat const &executor)const;
};

#endif