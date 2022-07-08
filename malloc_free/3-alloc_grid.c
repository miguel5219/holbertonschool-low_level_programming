#include "main.h"

/**
  * alloc_grid - pointer to a 2 dimensional array of integers
  * @width: size
  * @height: size
  * Return: pointer
  */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **pto;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	pto = malloc(height * sizeof(int *));
	if (pto == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pto[i] = malloc(width * sizeof(int));
		if (pto[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(pto[i]);
			}
			free(pto);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			pto[i][j] = 0;
		}
	}
	return (pto);
}

