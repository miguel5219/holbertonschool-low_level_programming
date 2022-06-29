#include "main.h"

/**
  * string_toupper - lowercas to uppercase
  * @str: string
  * Return: 0
  */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}
	return (str);
}
