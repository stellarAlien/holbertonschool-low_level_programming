/**
* _strstr - locates a substring
*
* @haystack: the longer string to search
* @needle: the substring to search for
*
* Return: a pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
int i, l;
l = 0;
while (needle[l] != '\0')
l++;
while (*haystack)
{
for (i = 0; needle[i]; i++)
{
if (haystack[i] != needle[i])
break;
}
if (i != l)
haystack++;
else
return (haystack);
}
return ('\0');
}

