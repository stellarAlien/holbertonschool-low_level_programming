#include"hash_tables.h"
/**
 *hash_table_print -  prints a hash table
 *@ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node;

	if (!ht || ht->size == 0)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("\'%s\' : \'%s\'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}");
}

