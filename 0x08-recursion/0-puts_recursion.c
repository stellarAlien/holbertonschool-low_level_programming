/**
 *  _puts_recursion(char *s) -  puts a string recursively
 *  @s: string to print 
 */

void _puts_recursion(char *s)
{
if (*s == 'n')
{
printf("%c", *s);
exit(1);
}
else
{
printf("%c", *s);
_puts_recursion(s++);
}
}
