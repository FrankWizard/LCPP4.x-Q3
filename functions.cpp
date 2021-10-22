#include <iostream>
#include <string>
#include <limits>

double valueInput()
{
	std::cout << "Enter a double value: ";
	double x;
	std::cin >> x;
	return x;
}

char operatorInput()
{
	char x = '0';
	while(x != '+' && x != '-' && x != '*' && x != '/')
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Enter one of the following: +, -, *, or /: ";
		std::cin >> x;
	}
	return x;
}

void calculateAndPrint(double x, double y, char operation)
{
	if (operation == '+')
	{
		std::cout << x << " + " << y << " = " << x + y << std::endl;
	}
	if (operation == '-')
	{
		std::cout << x << " - " << y << " = " << x - y << std::endl;
	}
	if (operation == '*')
	{
		std::cout << x << " * " << y << " = " << x * y << std::endl;
	}
	if (operation == '/')
	{
		std::cout << x << " / " << y << " = " << x / y << std::endl;
	}
}