#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */

void print_number(int n)
{
	unsigned int r = n;

	if (n < 0)
	{
		putchar('-');
		r = -r;
	}
	if ((r / 10) > 0)
		print_number(r / 10);
	putchar(r % 10 + '0');
}
