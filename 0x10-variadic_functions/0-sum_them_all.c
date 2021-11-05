#include<stdarg.h>
#include<stdio.h>
#include "varidiac_functions.h"
/**
 * sum_them_all - summ all vars
 * @n: size of args
 * Return: sum of all args
 */
int sum_them_all(const unsigned int n, ...)
{
int s;
unsigned int i;
va_list l;

s = 0;
if (n == 0)
	return (0);
va_start(l, n);
for (i = 0; i < n; i++)
{
	s += va_arg(l, int);
}
va_end(l);
return (s);
}
