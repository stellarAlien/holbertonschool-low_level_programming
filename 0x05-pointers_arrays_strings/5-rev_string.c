#include"main.h"
#include<string.h>
/**
 *  *rev_string - display revert string data
 *   *@s: pointer char
 *    *Return: void
 */
void rev_string(char *s)
{	
char c;
int n, i, x;
n = strlen(s);
while( i <=  n / 2)
{
x=s[i];
s[i] = s[n - i];
s[n - i] = x;
i++;
}
}
