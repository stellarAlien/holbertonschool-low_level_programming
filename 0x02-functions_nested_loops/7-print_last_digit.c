#include "main.h"
/**
 *  *print_last_digit - display last digit
 *   *@n: parameter integer
 *    *Return: last digit
 */
int print_last_digit(int n)
{
int x;
x = n % 10;
if (x < 0)
{
x = x * -1;
_putchar(x);
}
else
{
_putchar(x);
}
return (1);
}

