#include "main.h"

/**
  * print_array - calle from main
  * @a: pointer to int
  * @n: int
  * Return: 0
  */

void print_array(int *a, int n)
{
	int f;

	for (f = 0; f < n; f++)
	{
		printf("%d", a[f]);
		if (f != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
