#include "main.h"
/**
 *  *print_last_digit - display last digit
 *   *@n: parameter integer
 *    *Return: last digit
 *     */
int print_last_digit(int n)
{
if( n < 0){
_putchar((n % 10) * -1);
}
else
{
_putchar(n % 10);
}
return (1);
}

