#include<stdlib.h>
#include<stdio.h>
/**
 *
 */
char *argstostr(int ac, char **av)
{
char *s;
s = (char *)malloc((sizeof(char) * ac * 2) + 1);
if ( s == NULL)
{
printf("not enough memory");
return (NULL);
}
for ( i = 0 ; i <= ac; i += 2)
{
s[i] = av[i];
s[i + 1] = '\n';
}
s[i - 1] = '\0';
return(s);
}

