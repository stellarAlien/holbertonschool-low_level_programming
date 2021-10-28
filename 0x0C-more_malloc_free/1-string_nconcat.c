#include<stdlib.h>
#include<string.h>
/**
 * string_nconcat - concat two strings s1 and s2
 *@s1: string 1
 *@s2: string 2
 *@n: bytes from s2
 *Return: s or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	s = malloc(strlen(s1) + n);
	if (s == NULL)
	return (NULL);
	int k, i = 0;

	while (*s1 != '\0')
	{
		s[i] = s1[i];
	i++;
	}
	if (s2[i] == '\0')
	{
		s[i + 1] = '\0';
		break;
	}
	k =  i + 1;
	for (i = 0; i < n; i++)
	{
		s[k] = s2[i];
		k++;
	}
	s[k] = '\0';
	return (s);
}
