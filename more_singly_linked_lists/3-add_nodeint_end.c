#include "lists.h"

/**
  * add_nodeint_end - add node to end
  * @head: pointer head
  * @n: value
  * Return: node address
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *p = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		p = *head;
	}
	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = new_node;
	}
	return (p);
}
