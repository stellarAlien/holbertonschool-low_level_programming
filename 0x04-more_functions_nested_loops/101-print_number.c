#include "main.h"
/**
*print_number - prints number without array
*Return: void
*@n : int to print
*/
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
print_number(n * -1);
}
if (n < 10)
{
_putchar (n + '0');
}
else{
_putchar(n % 10 + '0');  
print_number(n / 10);
}  
}
