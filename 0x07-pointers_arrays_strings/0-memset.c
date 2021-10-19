#include"main.h"
/**
 *_memset - fill a memory space with a constant
 *@s: stringa
 *@b: byte 
 *@n: times to repeat constant char into buffer 
 *Return : s string
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
