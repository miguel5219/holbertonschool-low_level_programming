#include "variadic_functions.h"

/**
  * sum_them_all- sum of all its parameters
  * @n: integer
  * Return: 0
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	unsigned int add = 0;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		add += va_arg(numbers, int);

	va_end(numbers);

	return (add);
}
