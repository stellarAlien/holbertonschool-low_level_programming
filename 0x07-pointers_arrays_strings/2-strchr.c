/**
* _strchr - locate  a character in  a string
*@s : string to  search in
*@c : char to look for 
* Return: returns first position of c 
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return(s);
}
s++;
}
return ('\0');
}
