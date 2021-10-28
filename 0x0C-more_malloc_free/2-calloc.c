#include<stdlib.h>
/**
 * calloc - allocate memory contiguously
 * @nmemb: number of memory blocks
 * @size: size of each block
 * Return: Null in failure or arr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	int *p, *b;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = (int *)malloc(size);
	b = p;
	*b = 0;
	if (p == NULL)
	{
		return (NULL);
		free(p);
		free(b);
	   }
	for (i = 0; i < nmemb; i++)
	{
		b = p + size * i;
		b = (int *)malloc(size);
		if (b == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(p + j * size);
			}
			free(p);
			free(b);
			return (NULL);
	}
	*b = 0;
	}
	return (p);
}
