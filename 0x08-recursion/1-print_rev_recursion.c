#include"main.h"
/**
 *
 *
 */
void _print_rev_recursion(char *s)
{
if( *s == '\0')
{
_putchar(*s);
return;
}
_putchar(_print_rev_recursion(s + 1));
_putchar(*s);
}
