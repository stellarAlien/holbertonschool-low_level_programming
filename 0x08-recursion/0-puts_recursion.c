#include<stdio.h>
/**
 *  _puts_recursion(char *s) -  puts a string recursively
 *  @s: string to print 
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
_putchar(*s);
 _puts_recursion(s++);
}
