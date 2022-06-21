#include "main.h"

/**
  * print_most_numbers - print numbers not 2 and 4
  * Return: 0
  */

void print_most_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number != '2' && number != '4')
			_putchar (number);
	}
	_putchar ('\n');
}
