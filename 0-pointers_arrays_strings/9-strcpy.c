#include "main.h"

/**
  * *_strcpy - called from main
  * @dest: pointer to char
  * @src: pointer to char
  * Return: *dest
  */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = src[a];
	return (dest);
}
