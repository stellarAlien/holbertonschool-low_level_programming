#include"main.h"
/**
 * clear_bit - clears bit
 * @n: uns int
 * @index: index of bit
 * Return: 1 if success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 32)
return (-1);
if (*n >> index == 0)
	return (1);
else
*n &= ~(1 << index);
return (1);
}

