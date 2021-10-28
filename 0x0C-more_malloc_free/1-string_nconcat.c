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
	unsigned int k, i,  l;
	l = strlen(s1);
	s = malloc(l + n);
	if (s == NULL)
	{	
		return (NULL);
	}
	i = 0;
	
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
	i++;
	}
	if (s2[0] == '\0')
	{
		s[i] = '\0';
	}
	i++;
	for (; k < n; k++)
	{
		if(s2[k] == '\0')
		{
			s[i] = s2[k];
			break;
		}

		s[i] = s2[k];
		i++;
	}
	s[i] = '\0';
	return (s);
	free(s);
}
