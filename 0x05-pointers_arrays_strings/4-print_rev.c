#include "main.h"
#include<string.h>
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
