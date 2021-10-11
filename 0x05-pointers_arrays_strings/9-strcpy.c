#include "main.h"
#include<string.h>
char *_strcpy(char *dest, char *src)
{
n = strlen(src);
for (i = 0; i <= n; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (*dest);
}
