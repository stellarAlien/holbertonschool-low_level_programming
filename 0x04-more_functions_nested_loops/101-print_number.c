#include "main.h"
/* *
*main - prints number without array 
*Return: void
*/
void print_number(int n)
{
if(n < 0)
{
_putchar('-');
print_number(n * -1);
}
if(n < 10){
_putchar(n +'0');
}
else 
print_number(n / 10);
}
