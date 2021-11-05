#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - print variadic vars
 * @n:const
 * @separator:char
 * Return:int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;
	char *s;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(l, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(l);
}
