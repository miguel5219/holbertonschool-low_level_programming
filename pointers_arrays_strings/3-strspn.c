#include "main.h"

/**
  * _strspn -  gets the length of a prefix substring
  * @s: pointer
  * @accept: pointer
  * Return: o
  */

unsigned int _strspn(char *s, char *accept)
{
	int length = 0;
	int a = 0;
	int b = 0;

	while (s[a] != '\0')
	{
		while (accept[b] !='\0')
		{
			if (accept[b] == s[a])
				length++;
			b++;
		}
		b = 0;
		a++;
		if (s[a] == ' ')
		{
			break;
		}
	}
	return (length);
}
