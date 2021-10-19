#include "main.h"
#include <stdio.h>
/**
 *memset - fill a memory space with a constant
 *@s : string
 * @b: byte 
 * @n: int
 *Return : s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
} 
