#include "main.h"
#include <stdio.h>

/**
  * _puts - from the function
  * @str: char
  * Return: o
  */

void _puts(char *str)
{
	while (*str)
	_putchar (*str++);
	_putchar ('\n');
}
