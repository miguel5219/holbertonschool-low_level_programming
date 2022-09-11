#include "search_algos.h"

/**
  * binary_search - function that searches
  * for a value in a sorted array of integers
  * using the Binary search algorithm
  *
  * @array: pointer to the first element of the array to search in
  * @size: the number of elements in array
  * @value:  the value to search for
  * Return: index of value || -1 if not found
  */

int binary_search(int *array, size_t size, int value)
{
	size_t begin, middle, finish, i;

	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);

	begin = 0;
	finish = size - 1;
	while (begin <= finish)
	{
		printf("Searching in array: ");
		for (i = begin; i < finish; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		middle = ((begin + finish) / 2);
		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
			finish = (middle - 1);
		else
			begin = middle + 1;
	}
	return (-1);
}
