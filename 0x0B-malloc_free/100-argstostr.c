#include<stdlib.h>
#include<stdio.h>
/**
 * argstostr - read from argv
 * @ac: argc
 * @av: argv
 *Return: Null else s
 */
char *argstostr(int ac, char **av)
{
int i, j;
char *s;
s = (char *)malloc((sizeof(char) * ac * 2) + 1);
if (s == NULL)
{
printf("not enough memory");
return (NULL);
}
for (i = 0; i <= ac; i += 2)
{
j = 0;
while ( av[i][j] != '\0')
{
s[i] = av[i][j];
s[i + 1] = '\n';
j += 1;
}
}
s[i - 1] = '\0';
return (s);
}

