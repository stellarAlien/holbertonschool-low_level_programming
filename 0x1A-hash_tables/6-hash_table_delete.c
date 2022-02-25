#include "hash_tables.h"
/**
 *hash_table_delete - deletes alh hashtable nodes
 *@ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *node, *rab;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;
		node = ht->array[i];
		if (node->next)
		{
		while (node->next)
		{
			rab = node->next;
			free(node);
			node = rab;
		}
		free(rab);
		}
		else
			free(ht->array[i]);
	}
	free(ht);
}


