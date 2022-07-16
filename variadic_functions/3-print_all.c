#include "variadic_functions.h"

/**
  * print_all - print all types of arguments
  * @format: list of types of  arguments
  * Return: 0
  */

void print_all(const char * const format, ...)
{
	va_list lv;
	int j = 0;
	int k = 0;
	char *a = ", ";
	char *str;

	va_start(lv, format);

	while (format && format[k])
	k++;

	while (format && format[j])
	{
	if (j == (k - 1))
	{
	a = "";
	}
	switch (format[j])
	{
	case 'c':
	printf("%c%s", va_arg(lv, int), a);
	break;
	case 'i':
	printf("%d%s", va_arg(lv, int), a);
	break;
	case 'f':
	printf("%f%s", va_arg(lv, double), a);
	break;
	case 's':
	str = va_arg(lv, char *);
	if (str == NULL)
	str = "(nil)";
	printf("%s%s", str, a);
	break;
	}
	j++;
	}
	printf("\n");
	va_end(lv);
}

