#include"main.h"
/**
 *  _puts_recursion(char *s) -  puts a string recursively
 *  @s: string to print 
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
exit(0);
}
putchar(*s);
 _puts_recursion(s++);
}
