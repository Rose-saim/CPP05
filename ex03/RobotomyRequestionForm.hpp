#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <ctime>
#include <cstdlib>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestionForm.hpp"
#include "ShrubberyCreationForm.hpp"

class RobotomyRequestionFrom: public Form
{
	public:
		RobotomyRequestionFrom(std::string target);
		RobotomyRequestionFrom(RobotomyRequestionFrom const& copy);
		~RobotomyRequestionFrom();
		RobotomyRequestionFrom	&operator=(RobotomyRequestionFrom const &copy);
		void	execute(Bureaucrat const &executor)const;
};

#endif