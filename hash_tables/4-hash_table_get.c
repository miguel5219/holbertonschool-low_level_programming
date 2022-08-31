#include "hash_tables.h"

/**
  * hash_table_get - fucntion that retrieves a value associated with a key
  * @ht: is the hash table to wat to look into
  * @key: is the key you are looking for
  * Return: Value or NULL
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned int index = 0;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	if (!tmp)
		return (NULL);

	while (strcmp(key, tmp->key) != 0)
		tmp = tmp->next;

	return (tmp->value);
}
