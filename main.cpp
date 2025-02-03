#include <iostream>
#include "Calculator.h"

/*
Workshop #26
Calculator - Chain
Rev. B
*/

Calculator* Calculator::instance_ptr = nullptr;

int main()
{
	float firstVal{ 0 }, secondVal{ 0 };
	char op;

	Calculator* calc = Calculator::get_instance(firstVal);
	Calculator& calcRef = *calc;

	calcRef.calculate(2.0f, 3.0f, '+').calculate(2.0f, 'p').calculate(50.0f, '-').calculate(0, 'a');
	// Note: printing result is executed within calculate method; 'p' means power, 'a' means abs

	//Calculator::next_iteration(op, secondVal);

	//while (op != 'E' && op != 'e')
	//{
	//	Calculator::next_iteration(op, secondVal);
	//	calc->calculate(secondVal, op);
	//};

}
