#include "lists.h"

/**
  * insert_dnodeint_at_index - insert a new node at a given position
  * @h: pointer head
  * @idx: index of the list
  * @n: new node
  * Return: n or NULL
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;

	if (*h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		if (temp == NULL)
			new_node->next = NULL;
		else
			new_node->next = temp;
		temp->prev = new_node;
		*h = new_node;
		return (*h);
	}
	while (idx != 1 && temp != NULL)
	{
		temp = temp->next;
		idx--;
	}
	if (idx == 1 && temp == NULL)
		return (NULL);
	new_node->prev = temp;
	if (temp->next->next != NULL)
		new_node->next = temp->next;
	else
		new_node->next = NULL;
	temp->next = new_node;
	return (new_node);
}
