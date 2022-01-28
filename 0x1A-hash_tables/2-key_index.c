#include "hash_tables.h"
/**
 *key_index - calculates the index of the key passed
 *@key: key passed
 *@size: size of array of hashtable
 *Return: index of hash table
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	if (key == NULL)
	{
		return (0);
	}
	return (hash_djb2(key) % size);
}


