#include "main.h"
/**
 *  *print_last_digit - display last digit
 *   *@n: parameter integer
 *    *Return: last digit
 */
 int print_last_digit(int n)
{
x;
n=98;
x = n%10;
if (x < 0)
{
x = x * -1;
_putchar('-');
_putchar(x+'0');

}
else
{
_putchar(x+'0');
}
return (x);
}



