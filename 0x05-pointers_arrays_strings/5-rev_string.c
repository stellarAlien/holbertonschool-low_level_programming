#include"main.h"
#include<string.h>
void rev_string(char *s)
{	
char c;
int n, i;
n = strlen(s);
while( i <=  n / 2)
{
x=s[i];
s[i] = s[n - i];
s[n - i] = x;
i++;
}
}
