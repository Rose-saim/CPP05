#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
// #include "Form.hpp"

int main()
{
	std::cout  << COLOR(CYAN, "===1: My rank is high enough for execution and signature !====") << std::endl;
	try
	{
		std::cout << "==Step0=Create==" << std::endl;
		Bureaucrat n0("Anna", 1);
		Form* fml = new ShrubberyCreationForm("Me");
		std::cout << "==Step1==Verif dataq=" << std::endl;
		std::cout << "Form "<< fml->getName() << " is " << fml->getSigned() << "signed, you have to " << fml->getGradeSign();
		std::cout << " and " << fml->getGradeExec() << "rank" << std::endl;
		std::cout << n0.GetName() << " is " << n0.GetGrade() << " rank." << std::endl;
		std::cout << "==Step2=Execute form=" << std::endl;
		fml->beSigned(n0);
		std::cout << fml->getName() << " is " << fml->getSigned() << std::endl;
		fml->execute(n0);
	}
	catch(const std::exception& e)
	{
		std::cout << "========Step3========" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << "================" << std::endl;
		std::cout  << COLOR(CYAN, "===1: My rank is high enough for signature and not execution !====") << std::endl;
	try
	{
		std::cout << "==Step0=Create==" << std::endl;
		Bureaucrat Anna("Anna", 1);
		Form* fml = new ShrubberyCreationForm("John ");
		std::cout << "==Step1==Verif dataq=" << std::endl;
		std::cout << "Form "<< fml->getName() << " is " << fml->getSigned() << "signed, you have to " << fml->getGradeSign();
		std::cout << " and " << fml->getGradeExec() << "rank" << std::endl;
		std::cout << Anna.GetName() << " is " << Anna.GetGrade() << " rank." << std::endl;
		std::cout << "==Step2=Execute form=" << std::endl;
		fml->beSigned(Anna);
		std::cout << fml->getName() << " is " << fml->getSigned() << std::endl;
		fml->execute(Anna);
	}
	catch(const std::exception& e)
	{
		std::cout << "========Step3========" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << "================" << std::endl;
		std::cout  << COLOR(CYAN, "===1: My rank is not high enough for execution and signature !====") << std::endl;
	try
	{
		std::cout << "==Step0=Create==" << std::endl;
		Bureaucrat n0("Anna", 22);
		Form* fml = new PresidentialPardonForm("Me");
		std::cout << "==Step1==Verif dataq=" << std::endl;
		std::cout << "Form "<< fml->getName() << " is " << fml->getSigned() << "signed, you have to " << fml->getGradeSign();
		std::cout << " and " << fml->getGradeExec() << "rank" << std::endl;
		std::cout << n0.GetName() << " is " << n0.GetGrade() << " rank." << std::endl;
		std::cout << "==Step2=Execute form=" << std::endl;
		fml->beSigned(n0);
		std::cout << fml->getName() << " is " << fml->getSigned() << std::endl;
		fml->execute(n0);
	}
	catch(const std::exception& e)
	{
		std::cout << "========Step3========" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << "================" << std::endl;
		std::cout  << COLOR(CYAN, "===1: My rank is high enough for execution and signature !====") << std::endl;
	try
	{
		std::cout << "==Step0=Create==" << std::endl;
		Bureaucrat n0("Anna", 22);
		Form* fml = new PresidentialPardonForm("Me");
		std::cout << "==Step1==Verif dataq=" << std::endl;
		std::cout << "Form "<< fml->getName() << " is " << fml->getSigned() << "signed, you have to " << fml->getGradeSign();
		std::cout << " and " << fml->getGradeExec() << "rank" << std::endl;
		std::cout << n0.GetName() << " is " << n0.GetGrade() << " rank." << std::endl;
		std::cout << "==Step2=Execute form=" << std::endl;
		fml->beSigned(n0);
		std::cout << fml->getName() << " is " << fml->getSigned() << std::endl;
		fml->execute(n0);
	}
	catch(const std::exception& e)
	{
		std::cout << "========Step3========" << std::endl;
		std::cerr << e.what() << '\n';
	}
	return 0;
}