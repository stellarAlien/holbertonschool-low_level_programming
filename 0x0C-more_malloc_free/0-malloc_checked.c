#include<stdlib.h>
/**
 *malloc_checked: returns void pointer
 *@b: size of p
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);
	if ( p == NULL)
	{
		return ( NULL);
		exit(98);
	}
	else
		return(p);
}
