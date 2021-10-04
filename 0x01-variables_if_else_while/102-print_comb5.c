#include <stdio.h>
/**
*main - display all possible combinations of two two-digit numbers
*Return: 0
*/
int main(void)
{
int i = 0;
int j = 0;
int k = 0;
int l = 0;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
l = j + 1;
k = i;
for (; k <= '9'; k++)
{
for (; l <= '9'; l++)
{
putchar(i );
putchar(j);
putchar(' ');
putchar(k);
putchar(l );
if (!(x == '9' && y == '8'
&& z == '9' && o == '9'))
{
putchar(',');
putchar(' ');
}
}
o = 0;
}
}
}
putchar('\n');
return (0);
}
