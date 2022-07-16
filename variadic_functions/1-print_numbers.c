#include "variadic_functions.h"

/**
  * print_numbers - that function print numbers
  * @separator: stringto be printed between numbers
  * @n: number of integers
  * Return: value
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int i;

	va_start(number, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(number, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(number);
}
