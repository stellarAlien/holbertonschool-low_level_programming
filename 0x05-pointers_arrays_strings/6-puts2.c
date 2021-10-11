#include "main.h"
#include<string.h>
/**
 *  *puts2 - Write a function that prints every other
 *   *character of a string, starting with the first
 *    *character, followed by a new line.
 *     *@str: pointer char
 *      *Return: void
 */
void puts2(char *str)
{
int i, n;
n = strlen(str);
for (i = 0; i <= n ; i++)
{
if (!(i % 2))
{
printf("%c", str[i]);
}
}
}
