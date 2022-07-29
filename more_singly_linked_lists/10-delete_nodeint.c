#include "lists.h"

/**
  * delete_nodeint_at_index - delete node at index
  * @head: pointer
  * @index: unsigned int
  * Return: int
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head;
	listint_t *temp;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (p == NULL)
		{
			return (-1);
		}
		p = p->next;
	}
	temp = p->next;
	p->next = temp->next;
	free(temp);
	return (1);
}
