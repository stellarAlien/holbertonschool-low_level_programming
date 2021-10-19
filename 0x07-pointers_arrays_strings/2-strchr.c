/**
* _strchr - locate  a character in  a string
*@s : string to  search in
*@c : char to look for 
* Return: returns first position of c 
*/
char *_strchr(char *s, char c)
{
int *p, i;
i = 0;
while (s[i++])
{
if s[i] == c;
p = &s[i];
break;
}
return (p);
}
