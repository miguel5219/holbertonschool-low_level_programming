#include "lists.h"

/**
  * listint_len - return number of elements
  * @h: pointer
  * Return: number of nodes
  */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}


