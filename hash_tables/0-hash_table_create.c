#include "hash_tables.h"

/**
  * hash_table_create - this function create a new hash table
  * @size: size of table
  * Return: value of new table or NULL if fails
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(new_table) * size);
	if (new_table->array == NULL)
		return (NULL);

	return (new_table);
}
