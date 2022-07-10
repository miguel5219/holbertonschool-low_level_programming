#include "main.h"

/**
  * malloc_checked - allocated memory using malloc
  * @b: var
  * Return: pointer
  */

void *malloc_checked(unsigned int b)
{
	void *new_memory;

	new_memory = malloc(b);
	if (new_memory == NULL)
		exit(98);
	return (new_memory);
}
