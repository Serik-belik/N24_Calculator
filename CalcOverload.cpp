#include "Calculator.h"
#include <iostream>

// float val = 0.f in header;
Calculator::Calculator(float val): result(val) {}

Calculator Calculator::operator+ (const Calculator& right)
{
	return Calculator(result + right.result);
}

Calculator Calculator::operator- (const Calculator& right)
{
	return Calculator(result - right.result);
}

Calculator Calculator::operator* (const Calculator& right)
{
	return Calculator(result * right.result);
}

Calculator Calculator::operator/ (const Calculator& right)
{
	return Calculator(result / right.result);
}

Calculator Calculator::operator% (const Calculator& right)
{
	return Calculator((int)result % (int)right.result);
}

Calculator::operator float() const
{
	return (float)result;
}

Calculator Calculator::operator++()
{
	++result;
	return result;
}

Calculator Calculator::operator++(int)
{
	return result;
	++result;
}


std::ostream& operator<< (std::ostream& os, const Calculator& calc) {
	os << "res: " << calc.get_result() << std::endl;
	return os;
}