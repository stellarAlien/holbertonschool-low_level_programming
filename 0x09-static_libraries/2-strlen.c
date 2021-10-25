#include"main.h"
#include<string.h>
/**
 *  *_strlen - return size of array char
 *   *@s: pointer integer
 *    *Return: size of array char
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


