#include "main.h"
/**
 * _strcat - concatenates
 * @dest : dest
 * @src : src
 */
char *_strcat(char *dest, char *src)
{
int  l, j, i;
while(dest[l++])
l++;
for (i = l; src[j] != '\0' ; i++)
{
dest[i]  = src[j++];
}
dest[i] = '\0';
return(dest);
}
