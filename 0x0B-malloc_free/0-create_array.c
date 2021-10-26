#include<stdio.h>
#include<stdlib.h>
/**
 * *create_array- creates an arra and returns it's first char with c value
 *@size: size of array
 *@c: initial char
 *Return: Null if malloc fails or size == 0 or s if malloc is successful
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
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
for (i = 0; i <= size; i++)
{
	*(s + i) = c;
}
*(s + i) = '\0';
return (s);
}
