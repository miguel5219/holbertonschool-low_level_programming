#include "main.h"

/**
  * _strncpy - copy string
  * @dest: string 1
  * @src: string 2
  * @n: var
  * Return: 0
  */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
	dest[a] = src[a];
	a++;
	}
	a = a;

	while (a < n)
	{
	dest[a] = '\0';
	a++;
	}
	return (dest);
}
