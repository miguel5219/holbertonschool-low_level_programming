#include "lists.h"

/**
  * list_len - number of elements in a linked list_t list
  * @h: pointer
  * Return: number of elements
  */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
