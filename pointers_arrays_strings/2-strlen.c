#include "main.h"

/**
  *int _strlen - print long chain
  *@s: char
  *Return: int
  */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
