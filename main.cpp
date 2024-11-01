#include <iostream>
#include <string>

int addTwoNumbers(int a, int b)
{
	return a + b;
}

int subtractTwoNumbers(int a, int b)
{
	return a + b;
}

int divideTwoNumbers(int a, int b)
{
	try
	{
		return a / b;
	}
	catch (std::exception exception)
	{
		std::cout << "Nice try funny guy (you can't divide by 0)";
	}
}

int multiplyTwoNumbers(int a, int b)
{
	return a * b;
}

int main()
{
	// Simple calculator
	std::cout << "Ahhhh scary calculator\n";
	std::cout << "What operation? Choose: Addition, Subtraction, Multiplcation, Division\n";

	// Take input from user
	std::string choice;
	std::cin >> choice;

	// Ask user for numbers
	std::cout << "Enter first number! ";
	int a;
	std::cin >> a;

	std::cout << "Enter second number! ";
	int b;
	std::cin >> b;

	int result;

	if (choice == "addition")
	{
		result = addTwoNumbers(a, b);
	}
	else if (choice == "subtraction")
	{
		result = subtractTwoNumbers(a, b);
	}
	else if (choice == "division")
	{
		result = divideTwoNumbers(a, b);
	}
	else
	{
		result = multiplyTwoNumbers(a, b);
	}

	// Print out the result by using string concatenation
	std::cout << "Result is: " << result;
}
