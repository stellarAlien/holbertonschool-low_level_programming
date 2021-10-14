#include "main.h"
/**
 * _strcat - concatenates
 * @dest : dest
 * @src : src
 */
char *_strcat(char *dest, char *src)
{
int  l, i;
while(dest[l])
{
l++;    
}
for (i = 0; src[i] != '\0' ; i++)
{
dest[l++]  = src[i];
}
dest[i] = '\0';
return(dest);
}
