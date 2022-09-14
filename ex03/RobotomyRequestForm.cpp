#include "RobotomyRequestionForm.hpp"

RobotomyRequestionFrom::RobotomyRequestionFrom(std::string target): Form("Robotomy Requestion", target, 72, 45)
{
}

RobotomyRequestionFrom::RobotomyRequestionFrom(RobotomyRequestionFrom const& copy): Form(copy)
{
}

RobotomyRequestionFrom::~RobotomyRequestionFrom()
{
}

RobotomyRequestionFrom	&RobotomyRequestionFrom::operator=(RobotomyRequestionFrom const &copy)
{
	if (this != &copy)
		std::cout << "I can't create a copy." << std::endl;
	return (*this);
}

void	RobotomyRequestionFrom::execute(Bureaucrat const &executor)const
{
	this->execute(executor);
	if (this->getGradeExec() >= executor.GetGrade() && this->getSigned() ==true)
	{
		std::cout << "*Drill noises" << std::endl;
		std::srand(std::time(0) + std::rand() % 1000);
		int	randNb = std::rand() % 2;

		if (randNb == 0)
			std::cout << this->getTarget() << ", your operation is failed." << std::endl;
		else
			std::cout << this->getTarget() << ", your operation has been succesfully robotomized !" << std::endl;
	}
}