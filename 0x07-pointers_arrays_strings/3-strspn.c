/**
* verif - verif if char is in accept
*@c :char
*Return: 1 or 0
*/
int verif(char *c)
{
int i, v;
v = 0;
while ( accept[i++])
{
if (accept[i] == c)
{
v = 1;
break;
}
}
return (v);
}

/**
*_stspn - returns the length of prefix
*@s: string
*@accept : accept string
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
i = 0;
while (s[i] && verif(s[i++]))
{
continue;
}
return i;
}

    