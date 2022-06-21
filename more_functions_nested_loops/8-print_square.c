#include "main.h"

/**
 * print_square - called from function
 * @size: int
 * Return: void
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = size; a > 0; a--)
	{
		for (b = size; b > 0; b--)
		{
			_putchar('#');
		}
		_putchar ('\n');
	}
}

