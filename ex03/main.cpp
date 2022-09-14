#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestionForm.hpp"

int main()
{
	std::cout  << COLOR(RED, "===1: FORM DOES NOT EXIST !====") << std::endl;
	try
	{
		std::cout << COLOR(CYAN,"==Step0=INIT VARIABLE==") << std::endl;
		Bureaucrat n0("Anna", 1);
		Intern	intern;
		std::cout << COLOR(CYAN,"==Step1==VERIF DATA FORM | BUREAUCRAT | INTERN==") << std::endl;
		Form	*fml = intern.makeForm("JSPO", "target");
		if (fml == NULL)
			throw Intern::NoFunc();
		std::cout << "Form "<< fml->getName() << " is " << std::endl;
		std::cout << "ContractSigned: " << fml->getSigned() << " RankSign:" << fml->getGradeSign() << " ExecRank:"<< fml->getGradeExec() << std::endl;
		std::cout << COLOR(CYAN,"==Step2=INTERN CREATE FORM | BUREAUCRATE EXECUTE=") << std::endl;
		fml->beSigned(n0);
		std::cout << fml->getName() << " is " << fml->getSigned() << std::endl;
		fml->execute(n0);
	}
	catch(const std::exception& e)
	{
		std::cout << "========Step3========" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout  << COLOR(RED, "===1: FORM EXISTS !====") << std::endl;
	try
	{
		std::cout << COLOR(CYAN,"==Step0=INIT VARIABLE==") << std::endl;
		Bureaucrat n0("Anna", 1);
		Intern	intern;
		std::cout << COLOR(CYAN,"==Step1==VERIF DATA FORM | BUREAUCRAT | INTERN==") << std::endl;
		Form	*fml = intern.makeForm("PresidentialPardonForm", "target");
		if (fml == NULL)
			throw Intern::NoFunc();
		std::cout << "Form "<< fml->getName() << " is " << std::endl;
		std::cout << "ContractSigned: " << fml->getSigned() << " RankSign:" << fml->getGradeSign() << " ExecRank:"<< fml->getGradeExec() << std::endl;
		std::cout << COLOR(CYAN,"==Step2=INTERN CREATE FORM | BUREAUCRATE EXECUTE=") << std::endl;
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