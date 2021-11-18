#include "main.h"
/**
 * get_bit - determines bit state at certain position
 * @n: int to check
 * @index: position of index
 * Return: state of bit or NULL
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 32)
		return (-1);
	i = (n >> index) & 1;
	return (i);
}
