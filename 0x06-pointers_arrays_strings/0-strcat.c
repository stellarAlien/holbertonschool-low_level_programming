#include "main.h"
/**
 * _strcat - concatenates
 * @dest : dest
 * @src : src
 */
char *_strcat(char *dest, char *src)
{
int n, l, j, i;
while (src[n++])
n++;
while(dest[l++]);
l++;
for (i = l; dest[i] &&  i < n ; i++)
{
dest[i] = src[j++];
}
dest[i] = '\0';
return(dest);
}
