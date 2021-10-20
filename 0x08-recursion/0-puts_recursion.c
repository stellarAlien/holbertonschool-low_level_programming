#include<stdio.h>
/**
 *  _puts_recursion(char *s) -  puts a string recursively
 *  @s: string to print 
 */
void _puts_recursion(char *s)
{
if (*(s + 1) == '\0')
{
putchar(*s);
}
putchar(*s);
 _puts_recursion(s + 1);
}
