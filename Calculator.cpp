#include "Calculator.h"
#include <cmath>

/* Used with bunary operators */
void Calculator::aux_calc(const float& f, const float& s, const char op)
{
	switch (op)
	{
	case '+': { result = f + s; break; }
	case '-': { result = f - s; break; }
	case '*': { result = f * s; break; }
	case '/':
	{
		if (s != 0)
			result = f / s;
		else
			std::cout << "Zero division Error!" << std::endl;
		break;
	}
	case 'p': { result = (float)pow(f, (int)s); break; }
	default:
		break;
	}
}

/* Used with uniary operators */
void Calculator::aux_calc(const float& s, const char op)
{
	switch (op)
	{
	case 'a': { result = abs(result); break; }
	case 's': { result = sqrt(result); break; }
	case 'i': { result = 1 / result; break; }
	case '?': { Calculator::print_commands(); }
	default:
		break;
	}
}

void Calculator::calculate(const float& f, const float& s, const char op)
{
	if (is_uniar_operator(op))
		aux_calc(s, op);
	else
		aux_calc(f, s, op);
	
	if (op != '?')
		print_result();
}