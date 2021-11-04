#include<stdio.h>
/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to a function
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{	if (f == NULL || name == NULL)
	return;
	f(name);
}
