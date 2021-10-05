#include "main.h"
/**
 *  *  *_print_sign - display 1 is lower char, 0 otherwise
 *   *   *@c: The character or ascii code
 *    *    *Return: 0 or 1
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
_puchar('+');
return (1);
}
else
{
_putchar('0');
return (0);
}
