#include"main.h"
#include<string.h>
/**
 *  *rev_string - display revert string data
 *   *@s: pointer char
 *    *Return: void
 */
void rev_string(char *s)
{
int n, i, x;
i = 0;
n = strlen (s);
while( i <=  n / 2)
{
x=s[i];
s[i] = s[n - i - 1];
s[n - i] 	= x;
i++;
}
}
