#include "lists.h"

/**
  * free_dlistint -  frees a dlistint_t list
  * @head: pointer head
  * Return: value
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		tmp->next = NULL;
		free(tmp);
	}
}
