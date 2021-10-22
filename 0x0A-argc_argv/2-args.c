#include<stdio.h>
/**
 * main - print all argvarguments
 *@argc: argv size
 * @argv: argv
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int i;
for(i = 0; i < argc; i++)
{
printf("%s", argv[i]);
return(0);
}
