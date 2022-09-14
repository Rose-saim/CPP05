#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form
{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const& cpy);
	~ShrubberyCreationForm();
	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const& cpy);
	void	beExecute()const;
	void	execute(Bureaucrat const &executor)const;
};

#endif