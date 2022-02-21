#include "hash_tables.h"
/**
 *hash_table_get - returns value associated with key
 *@ht: hash table
 *@key: key that i am looking for
 *Return: value associated with key or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node;

	if (!ht || !key || *key == '\0')
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	if (!ht->array[i])
		return (NULL);
	node = ht->array[i];
	while (strcmp(node->key, key) != 0)
	{
		if (node->next == NULL)
			return (NULL);
		node = node->next;
	}
	if (node)
		return (node->value);
	return (NULL);
}
