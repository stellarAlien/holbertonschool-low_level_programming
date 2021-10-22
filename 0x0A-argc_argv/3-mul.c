#include<stdio.h>
/**
 * main - a*b;
 * @argc: argcount
 * argc: argvector
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
if ( argc < 3 )
	{
		printf("Error\n");
		return (1);
	}
else
{
printf("%d", val(argv[1])*val(argv[2]));
return (0);
}
}

