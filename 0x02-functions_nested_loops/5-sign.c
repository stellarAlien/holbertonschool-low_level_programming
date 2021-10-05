#include "main.h"
/**
 *print_sign - display + positive, - negative, 0 zero
 *@n: parameter character or code ascii
 *Return: + - or 0
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('0');
return (0);
}
}
