#include<stdlib.h>
/**
 *malloc_checked - returns void pointer
 *@b: size of p
 *Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	else
		return (p);
}
