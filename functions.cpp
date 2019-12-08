#include <iostream> //input/output streaming
#include <cstdlib> //standard C/C++/C# library
#include <string> //data string (ASCII)
#include "functions.hpp" //H_FUNCTIONS

std::string calculation; //@param calculation - ASCII data string (const char[]) defined by console input

bool isEven(int& a)
{
	if (a % 2 == 0 && a != 0) //if modulo 2 of a is equal 0, however a is not equal to 0 follow the statements in the body
	{
		std::cout << "true" << std::endl;
		return true; //function returns true if requirements are met
	}
	else
	{
		std::cout << "false" << std::endl;
		return false;
	}
}

void swap(int& b, int& c)
{
	int temp; //adding a new integer
	temp = b; //assigning @param temp with value of @param b
	b = c; //assigning @param b with value of @param c
	c = temp; //assigning @param c with value of @param temp
}

bool leapYear(int& currentYear)
{
	if (currentYear % 4 == 0 && currentYear % 100 != 0 || currentYear % 400 == 0)
	{
		std::cout << "the given year is a leap year" << std::endl;
		return true;
	}
	else
	{
		std::cout << "the given year is not a leap year" << std::endl;
		return false;
	}
}

void calc(float& calc_a, float& calc_b)
{
	std::cout << "enter a value (a): ";
	std::cin >> calc_a; //@defined @param calc_a
	std::cout << "enter a value (b): ";
	std::cin >> calc_b; //@defined @param calc_b
	std::cout << "select a calculation (+, -, *, /): ";
	std::cin >> calculation; //@defined @param calculation
	
	if (calculation == "+")
		std::cout << calc_a << " + " << calc_b << " = " << calc_a + calc_b << std::endl;
	else if (calculation == "-")
		std::cout << calc_a << " - " << calc_b << " = " << calc_a - calc_b << std::endl;
	else if (calculation == "*")
		std::cout << calc_a << " * " << calc_b << " = " << calc_a * calc_b << std::endl;
	else if (calculation == "/" && calc_b != 0)
		std::cout << calc_a << " / " << calc_b << " = " << calc_a / calc_b << std::endl;
	else if (calculation == "/" && calc_b == 0)
	{
		std::cout << "cannot divide by 0" << std::endl;
		calc(calc_a, calc_b);
	}
	else
	{
		std::cout << "undefined operation" << std::endl;
		calc(calc_a, calc_b);
	}
}

int ABS(int& d)
{
	if (d < 0)
	{
		d = d * (-1); //ABS cannot be a negative number
		return d;
	}
	
	return d;
}