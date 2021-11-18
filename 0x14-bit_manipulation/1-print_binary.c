#include "main.h"
/**
 * print_binary - prints an int in binary
 * @n: integer to print
 */
void print_binary(unsigned long int n)
{
	    unsigned int i, v;
		if (n == 0)
		printf("0");
		v = 0;
		for (i = 1 << 31; i > 0; i >>= 1)
		if (!!(n & i) == 1 || v == 1)
		{
		printf("%u", !!(n & i));
		v = 1;
		}

}

