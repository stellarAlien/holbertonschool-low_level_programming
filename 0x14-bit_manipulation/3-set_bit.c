#include "main.h"
/**
 * set_bit - sets bit to 1
 * @n: unsigned int
 * @index: index of bit
 * Return: 1 if success else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 32)
	return (-1);
if ((*n >> index) == 1)
return (1);
else
*n |= 1 << index;
return (1);
}

