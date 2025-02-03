#include <iostream>
#include "Calculator.h"

/*
Workshop #24
Calculator
Rev. New
*/

Calculator* Calculator::instance_ptr = nullptr;

int main()
{
	float firstVal{ 0 }, secondVal{ 0 };
	char op;

	Calculator* calc = Calculator::get_instance(firstVal);

	Calculator::print_commands();
	Calculator::next_iteration(op, secondVal);

	calc->calculate(firstVal, secondVal, op);

	while (op != 'E' && op != 'e')
	{
		Calculator::next_iteration(op, secondVal);
		calc->calculate(secondVal, op);
	};

}
