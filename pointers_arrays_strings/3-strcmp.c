#include "main.h"

/**
  * _strcmp - called from code
  * @s1: pointer
  * @s2: pointer
  * Return: 0
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (0);
}
