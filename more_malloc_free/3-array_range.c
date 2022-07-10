#include "main.h"

/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: NULL
  */

int *array_range(int min, int max)
{
	int *p, x, t;

	if (min > max)
		return (NULL);

	t = (max - min) + 1;
	p = malloc(sizeof(int) * t);
	if (p == NULL)
		return (NULL);

	for (x = 0; x < t && min <= max; x++, min++)
		*(p + x) = min;

	return (p);
}
