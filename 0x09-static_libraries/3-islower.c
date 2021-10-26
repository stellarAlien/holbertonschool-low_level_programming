#include "main.h"
/**
 *  *_islower - display 1 is lower char, 0 otherwise
 *   *@c: The character or ascii code
 *    *Return: 0 or 1
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}


