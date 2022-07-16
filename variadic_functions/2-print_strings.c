#include "variadic_functions.h"

/**
  * print_strings - that fucntion print a strings
  * @separator: string
  * @n: number of strings
  * Return: value
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	char *str;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(numbers, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
