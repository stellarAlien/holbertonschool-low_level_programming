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
_print_rev_recursion(s++);
}
else if ( (*(s + 1) == '\0'))
{
_putchar(*s);
_print_rev_recursion(--s);
}
else 
s = s + 1;
}

