#include "main.h"
/**
 * print_binary - prints an int in binary
 * @n: integer to print
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		printf("0");
	while (n > 0)
	{
		printf("%lu", n % 2);
		n /= 2;
	}
}
