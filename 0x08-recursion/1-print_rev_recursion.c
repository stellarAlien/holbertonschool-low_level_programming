#include"main.h"
/**
 * _print_rev_recursion - print a  reversed string
 * @s : string to be printed
 */
void _print_rev_recursion(char *s)
{
if( *(s + 1) == '\0')
{
_putchar(*s);
*s = '\0';
_print_rev_recursion(--s);
}
else 
s = s + 1;
}

