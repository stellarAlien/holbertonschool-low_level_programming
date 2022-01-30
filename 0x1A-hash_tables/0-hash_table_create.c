#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 *@size: size is the size of the array
 * Return: pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	array = malloc(sizeof(hash_node_t) * size);
	if (!array)
	{
		free(ht);
		return (NULL);
	}
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}
	ht->size = size;
	ht->array = array;
	return (ht);
}
