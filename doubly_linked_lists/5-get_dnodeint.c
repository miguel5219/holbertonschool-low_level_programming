#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node
  * @head: pointer head
  * @index: index node
  * Return: value or NULL 
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
