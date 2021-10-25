#include "main.h"

/**
 *  *_isalpha - display 1 is lower char, 0 otherwise
 *   *@c: The character or ascii code
 *    *Return: 0 or 1
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c <= 'Z' && c >= 'A'))
{
return (1);
}
else
{
return (0);
}
}

