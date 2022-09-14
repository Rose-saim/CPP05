#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout  << COLOR(CYAN, "===1: all is good and I can signed====") << std::endl;
	try
	{
		std::cout << "========Step0========" << std::endl;
		Bureaucrat n0("Anna", 1);
		Form fml("test", 20, 20);
		std::cout << "========Step1========" << std::endl;
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << n0.GetName() << " is " << n0.GetGrade() << std::endl;
		fml.beSigned(n0);
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << "========Step2========" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "========Step3========" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << "================" << std::endl;
	std::cout << COLOR(CYAN, "===2: Bureau is good but Form is wrong===") << std::endl;
	try
	{
		std::cout << "========Step0========" << std::endl;
		Bureaucrat n0("Anna", 1);
		Form fml("test", -20, 20);
		std::cout << "========Step1========" << std::endl;
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << n0.GetName() << " is " << n0.GetGrade() << std::endl;
		fml.beSigned(n0);
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << "========Step2========" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "========Step3========" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << "================" << std::endl;
		std::cout << "==3: Bureau is good but Form is wrong" << std::endl;
	try
	{
		std::cout << "========Step0========" << std::endl;
		Bureaucrat n0("Anna", 1);
		Form fml("test", 20, -20);
		std::cout << "========Step1========" << std::endl;
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << n0.GetName() << " is " << n0.GetGrade() << std::endl;
		fml.beSigned(n0);
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << "========Step2========" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "========Step3========" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << "================" << std::endl;
	std::cout << COLOR(CYAN, "===:4 Limit of Form signed===") << std::endl;
	try
	{
		std::cout << "========Step0========" << std::endl;
		Bureaucrat n0("Anna", 1);
		Form fml("test", 0, 20);
		std::cout << "========Step1========" << std::endl;
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << n0.GetName() << " is " << n0.GetGrade() << std::endl;
		fml.beSigned(n0);
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << "========Step2========" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "========Step3========" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << "================" << std::endl;
	std::cout <<  COLOR(CYAN,"===:5 Limit of Form exec===") << std::endl;
	try
	{
		std::cout << "========Step0========" << std::endl;
		Bureaucrat n0("Anna", 1);
		Form fml("test", 20, 151);
		std::cout << "========Step1========" << std::endl;
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << n0.GetName() << " is " << n0.GetGrade() << std::endl;
		fml.beSigned(n0);
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << "========Step2========" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "========Step3========" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << "================" << std::endl;
	std::cout << COLOR(CYAN, "===:6 Bureaucrate have grade equal sign===") << std::endl;
	try
	{
		std::cout << "========Step0========" << std::endl;
		Bureaucrat n0("Anna", 1);
		Form fml("test", 1, 150);
		std::cout << "========Step1========" << std::endl;
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << n0.GetName() << " is " << n0.GetGrade() << std::endl;
		fml.beSigned(n0);
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << "========Step2========" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "========Step3========" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << "================" << std::endl;
		std::cout << COLOR(CYAN, "===7: Bureaucrate have grade equal exec===") << std::endl;
	try
	{
		std::cout << "========Step0========" << std::endl;
		Bureaucrat n0("Anna", 1);
		Form fml("test", 20, 1);
		std::cout << "========Step1========" << std::endl;
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << n0.GetName() << " is " << n0.GetGrade() << std::endl;
		fml.beSigned(n0);
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << "========Step2========" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "========Step3========" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << "================" << std::endl;
	std::cout << COLOR(CYAN, "===8: Bureaucrate have not acces===") << std::endl;
	try
	{
		std::cout << "========Step0========" << std::endl;
		Bureaucrat n0("Anna", 30);
		Form fml("test", 20, 20);
		std::cout << "========Step1========" << std::endl;
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << n0.GetName() << " is " << n0.GetGrade() << std::endl;
		fml.beSigned(n0);
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << "========Step2========" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "========Step3========" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << "================" << std::endl;		std::cout <<COLOR(CYAN,  "===10: Bureaucrate have negatif grade===") << std::endl;
	try
	{
		std::cout << "========Step0========" << std::endl;
		Bureaucrat n0("Anna", -2);
		Form fml("test", 20, 150);
		std::cout << "========Step1========" << std::endl;
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << n0.GetName() << " is " << n0.GetGrade() << std::endl;
		fml.beSigned(n0);
		std::cout << fml.getName() << " is " << fml.getSigned() << std::endl;
		std::cout << "========Step2========" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "========Step3========" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << "================" << std::endl;
	return 0;
}