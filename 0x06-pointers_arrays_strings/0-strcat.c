#include "main.h"
#include<string.h>
/**
 * _strcat - concatenates
 * @dest : dest
 * @src : src
 */
char *_strcat(char *dest, char *src)

{
int n;
n = strlen(src);
l = strlen(dest);
for (i = l; dest[i] &&  i < n ; i++ )
{
dest[i] = src[j++];
}
dest[i] = '\0';
}
