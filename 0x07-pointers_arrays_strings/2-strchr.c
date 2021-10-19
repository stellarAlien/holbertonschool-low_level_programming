/**
* _strchr - locate  a character in  a string
*@s : string to  search in
*@c : char to look for 
* Return: returns first position of c 
*/
char *_strchr(char *s, char c)
{
char *p
p = NULL;
i = 0;
while (*s != '\0')
{
if 
{
*s == c;
p = s;
break;
}
s++;
}
return (p);
}
