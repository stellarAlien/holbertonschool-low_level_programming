#include "main.h"
/**
 *  *puts2 - Write a function that prints every other
 *   *character of a string, starting with the first
 *    *character, followed by a new line.
 *     *@str: pointer char
 *      *Return: void
 */
void puts2(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
if (!(i % 2))
{
printf("%c", str[i]);
}
i++;
}
}
