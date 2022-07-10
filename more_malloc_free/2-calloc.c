#include "main.h"

/**
  * _calloc - allocates memory for an array, using malloc
  * @nmemb: unsigned int
  * @size: unsigned int
  * Return: void pointer
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < size * nmemb)
	{
		((char *)p)[i] = 0;
		i++;
	}
	return (p);
}
