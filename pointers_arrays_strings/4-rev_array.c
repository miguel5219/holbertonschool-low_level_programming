#include "main.h"

/**
  * reverse_array - print array in reverse
  * @a: var
  * @n: var
  * Return: 0
  */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (y = 0; y < n / 2; y++)
	{
		x = a[y];
		a[y] = a[n - 1 - y];
		a[n - 1 - y] = x;
	}
}
