#include <time.h>
#include<stdlib.h>
#include<stdio.h>
/**
*      * main - Entry point
*           *
*                * Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = '0'; i <= '8'; i++)
{
putchar(i+'0');
putchar(',');
putchar(' ');
}
putchar ('9');
return (0);
}
