#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& cpy): Form(cpy)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery Creation", target, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
	if (this != &copy)
		std::cout << "I can't create a copy." << std::endl;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor)const
{
	Form::execute(executor);
	if (this->getGradeExec() >= executor.GetGrade() && this->getSigned() ==true)
	{
    std::ofstream file((this->getTarget())+ "shrubbery ");
	file << "                 # #### ####			" << std::endl;
    file << "               ### \\/#|### |/####		" << std::endl;
    file << "              ##\\/#/ \\||/##/_/##/_#	" << std::endl;
    file << "            ###  \\/###|/ \\/ # ###	" << std::endl;
    file << "          ##_\\_#\\_\\## | #/###_/_####" << std::endl;
    file << "         ## #### # \\ #| /  #### ##/##	" << std::endl;
    file << "          __#_--###`  |{,###---###-~	" << std::endl;
    file << "                    \\ }{				" << std::endl;
    file << "                     }}{				" << std::endl;
    file << "                     }}{				" << std::endl;
    file << "                     {{}				" << std::endl;
    file << "               , -=-~{ .-^- _			" << std::endl;
    file << "                     `}				" << std::endl;
    file << "                      {				" << std::endl;
	file.close();
	std::cout << this->getTarget()+ "_shrubbery is created." << std::endl;
	}
}