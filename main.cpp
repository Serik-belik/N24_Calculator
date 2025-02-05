#include <iostream>
#include "Calculator.h"

/*
Workshop #29
Calculator - OverLoading
Rev. C
*/

int main()
{

	Calculator c1(2), c2(3);

	Calculator res = c1 + c2;
	std::cout << res;
	c1 = 5;
	res = c1 % 2;
	std::cout << res;
	res = 3;
	++res;
	std::cout << res;
	res++;
	std::cout << res;

}
