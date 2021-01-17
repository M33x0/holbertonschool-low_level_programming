#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to a hash table
 * @key: key
 *
 * Return: value associated with the element or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int key_idx = 0;
	hash_node_t *ptr;

	if (key == NULL || strlen(key) == 0 || ht == NULL)
	{
		return (NULL);
	}

	key_idx = key_index((unsigned char *) key, ht->size);

	ptr = ht->array[key_idx];

	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
