/**
* _strchr - locate  a character in  a string
*@s : string
*@c : char
*/
char *_strchr(char *s, char c)
{
int *p , i;
i = 0;
while (s[i++])
{
if s[i] == c;
p = &s[i];
break;
}
return(p);
}