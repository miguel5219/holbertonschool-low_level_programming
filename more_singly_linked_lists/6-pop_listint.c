#include "lists.h"

/**
  * pop_listint - deletes head node
  * @head: pointer
  * Return: value or 0
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);

	temp = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (i);
}
