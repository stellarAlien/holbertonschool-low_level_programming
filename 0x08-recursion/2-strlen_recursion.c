#include"main.h"
/**
 * _strlen_recursion - strlen with recursion
 * @s : string to determine the length of 
 */
int _strlen_recursion(char *s)
{
if (*s)
return ( 1 + _strlen_recursion(s +1));
else
return (0);
}
