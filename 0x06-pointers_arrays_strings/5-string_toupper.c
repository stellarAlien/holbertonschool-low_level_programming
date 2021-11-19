#include "main.h"
/**
 * string_toupper - makes lower case to upper case
 *@s: string to upper
 * Return: string
 */
char *string_toupper(char *s)
{
char *str = s;

while (*s != '\0')
{
if ((*s >= 'a') && (*s <= 'z'))
*s = *s - 32;
s++;
}
return (str);
}
