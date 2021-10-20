#include"main.h"
/**
 * _print_rev_recursion - print a  reversed string
 * @s : string to be printed
 */
void _print_rev_recursion(char *s)
{
if( *s == '\0')
{
_putchar('\0');
return;
}

else if(*s == '\n')
{
_putchar('\n');
}
else if ( (*(s + 1) == '\0'))
{
_putchar(*s);
*s = '\0';
_print_rev_recursion(--s);
}
else 
s = s + 1;
}

