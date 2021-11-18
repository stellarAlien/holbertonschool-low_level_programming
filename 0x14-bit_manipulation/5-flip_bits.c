#include "main.h"
/**
 * flip_bits - flips bits
 * @n: first int
 * @m: second int
 * Return: number of opposite bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i = 0;

while (n > 0 || m > 0)
{
	int t1 = (n & 1);
	int t2 = (m & 1);

	if (t1 != t2)
	{
	flips++;
	}
n >>= 1;
m >>= 1;
}
return (flips);
}
