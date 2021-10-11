#include "main.h"
#include<string.h>
/**
 *  *puts_half - Write a function that prints half of a string
 *   *@str: pointer char
 *    *Return: void
 */
void puts_half(char *str)
{
int i, n;
if(!( strlen(str) % 2))
{
i = ((strlen(str)-1)/2);
}
else
i = strlen(str)/2;
n = strlen(str);
while(i <= n)
{
putchar(str[i]);
i++
}
}

