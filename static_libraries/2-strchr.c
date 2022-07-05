#include "main.h"

/**
  * _strchr - search character on string
  * @s: pointer
  * @c: constant
  * Return: 0
  */

char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	if (s[a] ==  c)
		return (s + a);
	}
	return ('\0');
}
