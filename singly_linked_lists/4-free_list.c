#include "lists.h"

/**
  * free_list - free all asigned malloc of a list
  * @head: pointer
  */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);
		free(head->str);
		free(head);
	}
}
