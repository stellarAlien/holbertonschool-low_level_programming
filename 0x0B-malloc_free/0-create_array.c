#include<stdio.h>
/**
 * *create_array- creates an arra and returns it's first char with c value
 *@size: size of array
 *@c: initial char
 *Return: Null if malloc fails or size == 0 or s if malloc is successful
 */
char *create_array(unsigned int size, char c)
{
char *s;
if (size == 0)
	{
	return (NULL);
	}
s = malloc(sizeof(char) * size);
if (s == NULL)
	{
	return (NULL);
	}
*s = c;
return (s);
}
