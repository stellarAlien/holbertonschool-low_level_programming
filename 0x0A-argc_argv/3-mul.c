#include<stdio.h>
/**
 * main - a*b;
 * @argc: argcount
 * argc: argvector
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
int a, b;
if ( argc < 3 )
	{
		printf("Error\n");
		return (1);
	}
else
{
a = val(argv[1]);
b = val(argv[2]);
printf("%d", val(argv[1])*val(argv[2]));
return (0);
}
}

