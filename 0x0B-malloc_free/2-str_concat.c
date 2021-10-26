#include<stdlib.h>
#include<stdio.h>
/**
 * str_concat - concats two strings
 * @s1:string uno
 * @s2: another string
 *Return: Null if malloc fails and s if not
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i, j, k, t;
char *s;
if (*s1 == '\0')
{
return (s2);
}
else if (*s2 == '\0')
{
return (s1);
}
while (s1[i] != '\0')
	{
		i++;
	}
while (*s2 != '\0')
{
	j++;
}
i++;
s = malloc(sizeof(char) * (i + j));
if (s == NULL)
{
	fprintf(stderr, "not enough memory");
	return (NULL);
}
for (k = 0; k <= i; k++)
{
s[k] = s1[i];
}
t = 0;
for (k = 0; k <= (i + j); k++)
{
s[k] = s2[t];
t++;
}
s[k] = '\0';
return (s);
}
