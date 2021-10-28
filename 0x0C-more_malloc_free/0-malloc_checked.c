#include<stdlib.h>
/**
 *malloc_checked - returns void pointer
 *@b: size of p
 *Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = (int *)malloc(b);
	if (p == NULL)
	{
		return (NULL);
		exit(98);
	}
	else
		return (p);
}
