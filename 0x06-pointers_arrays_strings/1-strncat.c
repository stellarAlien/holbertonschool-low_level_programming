/**
 *_strncat - concatenates two strings
 *@dest: pointer parameter destination
 *@src: pointer parameter source
 *@n: integer
 *Return: destination variable
 */
char *_strncat(char *dest, char *src, int n)
{
int d;
d = strlen(dest)
for (i = d; i <= n; i++)
{
dest[i] = src [i];    
}    
src[i] = '\0';
}