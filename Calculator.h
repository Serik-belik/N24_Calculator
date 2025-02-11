#pragma once

#include <iostream>

class Calculator
{
	float result{ .0f };

	/* Used with bynary operators */
	void aux_calc(const float& f, const float& s, const char op);

	/* Used with uniary operators */
	void aux_calc(const float& s, const char op);

public:
	Calculator(float val = 0.f);
	~Calculator() = default;

	void print_result()
	{ std::cout << "Result: " << result << std::endl << std::endl; }

	float get_result() const { return result; }

	Calculator& calculate(const float& f, const float& s, const char op);

	Calculator& calculate(const float& second, const char op)
	{
		calculate(result, second, op);
		return *this;
	}

	static void print_commands()
	{
		std::cout << std::endl;
		std::cout << "================ AVAILABLE COMMANDS ================" << std::endl;
		std::cout << "(+) Add      (-) Substr   | (p) Power    (s) Sqrt   " << std::endl;
		std::cout << "(*) Mult     (/) Dev      | (a) Abs      (i) Inverse" << std::endl;
		std::cout << "__________________________| ________________________" << std::endl;
		std::cout << "(E) Exit                  | (?) Commands" << std::endl;
		std::cout << std::endl;
	}

	static bool is_uniar_operator(const char& op)
	{
		const char uniaryOperators[] = "EeSsAaIi?";
		for (int i = 0; i < 9; ++i)
			if (uniaryOperators[i] == op)
				return true;

		return false;
	}

	static void next_iteration(char& op, float& secondVal)
	{
		std::cout << "Enter operator: ";
		std::cin >> op;

		if (!Calculator::is_uniar_operator(op))
		{
			std::cout << "Enter second value: ";
			std::cin >> secondVal;
		}
	}

	Calculator operator+ (const Calculator& right);
	Calculator operator- (const Calculator& right);
	Calculator operator* (const Calculator& right);
	Calculator operator/ (const Calculator& right);
	operator float() const;
	Calculator operator% (const Calculator& right);
	Calculator operator++();
	Calculator operator++(int);
};

std::ostream& operator<< (std::ostream& os, const Calculator& calc);
