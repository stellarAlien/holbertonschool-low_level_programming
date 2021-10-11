#include "main.h"
void print_rev(char *s)
{
int i;
for (i = strlen(s); i >= 0; i--)
{
putchar(s[i]);
}	
putchar('\n');
}
