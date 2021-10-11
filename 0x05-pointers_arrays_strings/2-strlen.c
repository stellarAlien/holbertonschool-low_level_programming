#include"main.h"
/*
 * _strlen: check code
 *@*s: string
 */
int _strlen(char *s)
{
int i;
while(s[i] != "\0")
{
i++;
}
return(i);
}
