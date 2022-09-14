#ifndef ROBOTOMYREQUESTFROM_HPP
#define ROBOTOMYREQUESTFROM_HPP

#include <ctime>
#include <cstdlib>
#include "Form.hpp"

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