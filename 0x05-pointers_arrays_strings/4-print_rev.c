#include "main.h"
#include<string.h>
/**
 *  *_puts - display string data
 *   *@str: pointer char
 *    *Return: void
 */

void print_rev(char *s)
{
int i;
i = strlen(s) - 1;
while ((s[i] != '\0') && (i >= 0))
{
putchar(s[i]);
i--;
}
putchar('\n');
}
