#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main (void)
{
int i, j, k, l;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= 9; j++)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
for (k=0; k <= 9; k++)
{
for (;l <= 9; l++)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
if (!(i == '9' && j == '8' && k == '9' && l == '9'))
{
putchar(',');
putchar(' ');
}
l=0;
}
}
}
}
putchar ('\n');
 return(0);
}
