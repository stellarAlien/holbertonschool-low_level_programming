#include"hash_tables.h"
#include<stddef.h>
#include<stdlib.h>
#include<string.h>
/**
 *update_val - updates key value in case value is existant
 *@temp: temporary node to look for insertion position
 *@new_node: node to hold key value pair
 */
void update_val(hash_node_t *temp, hash_node_t *new_node)
{
		free(temp->value);
		temp->value = strdup(new_node->value);
		free(new_node->value);
		free(new_node->key);
		free(new_node);
}
/**
 *hash_table_set - adds element to hash table
 *@ht: hash table
 *@key: key of the element
 *@value: value to be duplicated
 *Return: 1 if success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int idx;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	if (new_node == NULL)
		return (0);
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL)
	{
		temp = ht->array[idx];
		while (temp != NULL)
		{
			if (strcmp(temp->key, new_node->key) == 0)
				break;
			temp = temp->next;
		}
		if (temp == NULL)
		{
			new_node->next = ht->array[idx];
			ht->array[idx] = new_node;
		}
		else
		{
			update_val(temp, new_node);
		}
	}
	else
	{
		new_node->next = NULL;
		ht->array[idx] = new_node;
	}
	return (1);
}
