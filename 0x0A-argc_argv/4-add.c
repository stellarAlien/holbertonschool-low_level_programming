#include<stdio.h>
#include<string.h>
#include<ctype.h>
/**
 *  *main - adds positive numbers.
 *   *@argc: size parameters
 *    *@argv: array pointer parameters
 *     *Return: 0 success or 1 error
 */
int main(int argc, char *argv[])
{
int i, s, l, j;
s = 0;
j = 0;
l = 0;
	if(argc < 2)
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

