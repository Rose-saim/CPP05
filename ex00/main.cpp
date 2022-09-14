#include "Bureaucrat.hpp"

int main()
{
	std::cout << "================" << std::endl;
	try
	{
		std::cout << "==Step0==" << std::endl;
		Bureaucrat n0("Anna", 1);
		std::cout << "==Step1==" << std::endl;
		n0.Increment();
		std::cout << "==Step2==" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "==Step3==" << std::endl;
		std::cerr << e.what() << '\n';
		std::cout << "==Step4==" << std::endl;
	}
	std::cout << "================" << std::endl;
	try
	{
		Bureaucrat n1("Anna", 150);
		n1.Decrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "================" << std::endl;
	try
	{
		Bureaucrat n2("Anna", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "================" << std::endl;
	try
	{
		Bureaucrat n3("Anna", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "================" << std::endl;
	try
	{
		Bureaucrat n4("Anna", 21);
		n4.Increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "================" << std::endl;
	try
	{
		Bureaucrat fal("Anna", -5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	std::cout << "================" << std::endl;
	return 0;
}