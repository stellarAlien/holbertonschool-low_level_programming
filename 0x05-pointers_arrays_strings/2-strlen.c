#include"main.h"
#include<string.h>
/*
 *  * _strlen: check code
 *   *@*s: string
 */
int  _strlen(char *s)
{
int i;
i =   0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

