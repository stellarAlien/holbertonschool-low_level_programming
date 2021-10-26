#include<stdio.h>
/**
 *main - print argc
 *@argc: argcount
 *@argv: argvector
 *Return: always 0
 */
int main(int argc,  __attribute__((unused)) char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}

