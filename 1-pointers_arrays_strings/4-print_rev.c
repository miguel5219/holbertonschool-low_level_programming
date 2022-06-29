#include "main.h"

/**
  * print_rev - called from the code
  * @s: char
  * Return: 0
  */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != 0)
	{
		a++;
	}
	while (a > 0)
	{
		a--;
		_putchar(s[a]);
	}
	_putchar('\n');
}
