#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: pointer parameter destination
 *@src: pointer parameter source
 *@n: integer
 *Return: destination variable
 */
char *_strncat(char *dest, char *src, int n)
{
int d, i;
while (dest[d])
{
d++;
}
for (i = 0; i <= n ; i++)
{
dest[d] = src [i];
d++;    
}    
dest[d] = '\0';
return (dest);
}
