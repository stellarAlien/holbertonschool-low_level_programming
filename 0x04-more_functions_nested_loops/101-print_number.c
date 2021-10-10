#include "main.h"

/**
* print_number - print integer without array
*
* @n: integer to print
* Return: void
*/
void print_number(int n)
{
	unsigned int r;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	r = n;
	if (r / 10)
		print_number(r / 10);
	_putchar((r % 10) + '0');
}
