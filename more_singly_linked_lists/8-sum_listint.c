#include "lists.h"

/**
  * sum_listint - returns the sum of all data
  * @head: pointer
  * Return: value or 0
  */

int sum_listint(listint_t *head)
{
	int sum_result = 0;

	while (head)
	{
		sum_result += head->n;
		head = head->next;
	}
	return (sum_result);
}
