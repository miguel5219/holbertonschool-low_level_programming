#include "lists.h"

/**
  * insert_nodeint_at_index - inserta new node at a given position
  * @head: pointer
  * @idx: unsigned int
  * @n: int
  * Return: address node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *p = *head;
	listint_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = p;
		*head = new_node;
		return (new_node);
	}
	for (i = 1; i <= idx - 1; i++)
	{
		if (p == NULL ||p->next == NULL)
		{
			return (NULL);
		}
		p = p->next;
	}
	new_node->next = p->next;
	p->next = new_node;
	return (new_node);
}
