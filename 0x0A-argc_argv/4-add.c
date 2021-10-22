#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
int i,s, l, j;
s = 0;
j = 0;
l = 0;
	if(*argc < 1)
	{
		print("0\n");
	}
	else
	{
	for(i = 0; argv[i]; i++)
	{
	l = strlen(argv[i]);
	for ( j = 0; j < l ; j++)
	{
	if (isdigit(argv[i]) && argv[i] > 0)
	{
	s += argv[i];
	}
	else
	{
	printf("Error\n");
	return(1);
	}
	}
	}
	printf("%u", s);
	}
	return(0);
}
	

