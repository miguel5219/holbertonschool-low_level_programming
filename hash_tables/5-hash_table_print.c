#include "hash_tables.h"

/**
  * hash_table_print - function that prints a hash table
  * @ht: is the hash table
  */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned int i = 0;
	unsigned long int index = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (i == 1)
				printf(", ");

			printf("'%s': '%s'", tmp->key, tmp->value);
			i = 1;
			tmp = tmp->next;
		}
		index++;
	}
	printf("}\n");
}
