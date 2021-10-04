#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int i, j, k, v;
for (i = '0' ; i <= '7'  ; i++)
{
for (j = i + 1; j <= '8'; j++)
{
for (k = '2'; k <= '9'; k++)
{
if (i == '7' && j == '8' && k == '9')
{
v = 1;
}
if (i < j && j < k)
{
putchar(i);
putchar(j);
putchar(k);
if (v == 1)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
