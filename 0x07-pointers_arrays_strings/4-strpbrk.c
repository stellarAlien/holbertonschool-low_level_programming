/**
* _stpbrk - finds first char from accept
* @s :char
*@accept
*/
char *_strpbrk(char *s, char *accept)
{
int i, j, *v;
v = NULL; 
while (s[i])
{
for (j = 0; accept[j]; j++)
{
if(accept [j] == s[i])
{
v = &s[i];
break;
}
}
if (v)
break;
}
return (v);
}