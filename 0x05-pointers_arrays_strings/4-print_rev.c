#include "main.h"
#include<string.h>
/**
 *print_rev - display revert string data
  *@s: pointer char
   *Return: void
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
