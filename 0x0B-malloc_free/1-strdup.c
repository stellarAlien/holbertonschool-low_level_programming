#include<stdio.h>
#include<stdlib.h>
/**
 * _strdup - returns copied string
 * @str: string to copy from
 * Return: NULL if no memory is avaliable or str is null and s if not
 */
char *_strdup(char *str)
{
int i, l = 0;
char *s;
	if (str == NULL)
	{
	return (NULL);
	}
	while (*str != '\0')
	{
	l += 1;
	}
	s = malloc((sizeof(char) * l) + 1);
	if (s == NULL)
	{
	fprintf(stderr, "insufficient memory was available");
	return (NULL);
	}
	for (i = 0; i < l ; i++)
	{
	s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
	free(s);
}
