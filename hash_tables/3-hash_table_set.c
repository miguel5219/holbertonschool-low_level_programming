#include "hash_tables.h"

/**
  * hash_table_set - function that adds an element to the hash table
  * @ht: isthe hash table you want to add the key/value
  * @key: is the key
  * @value: is the vlue associated with the key
  * Return: index of the key
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_elem, *existing;
	unsigned long int index;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	existing = ht->array[index];

	while (existing != NULL)
	{
		if (strcmp(existing->key, key) == 0)
		{
			existing->value = strdup(value);
			return (1);
		}
		existing = existing->next;
	}
	new_elem = malloc(sizeof(hash_node_t));
	new_elem->key = strdup(key);
	new_elem->value = strdup(value);	
	if (new_elem->value == NULL)
		return (0);

	new_elem->next = ht->array[index];
	ht->array[index] = new_elem;
	return (1);
}







