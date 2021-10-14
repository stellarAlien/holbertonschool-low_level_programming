#include "main.h"
/**
 * _strcat - concatenates
 * @dest : dest
 * @src : src
 */
char *_strcat(char *dest, char *src)
{
int  l,i = 0;
while(dest[l])
{
l++;    
}
for (i = 0; src[i] != '\0' ; i++)
{
dest[l]  = src[i];
l++;
}
dest[l] = '\0';
return(dest);
}
