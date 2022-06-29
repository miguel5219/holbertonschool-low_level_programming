#include "main.h"

/**
  * _memcpy - copies memory area
  * @dest: pointer
  * @src: pointer
  * @n: constant
  * Return: s
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
