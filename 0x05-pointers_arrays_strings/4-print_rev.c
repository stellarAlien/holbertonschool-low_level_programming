#include "main.h"
void print_rev(char *s)
{
int i;
i=strlen(*s);
while (s[i] != '\0' && i > 0)
{
putchar(s[i]);
i++;
}	
putchar('\n');
}
