
/**
*memset - fill a memory space with a constant
*@s : string
*@b : byte 
*@n : int
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i <=  n; i++)
{
s[i] = b;
}
return (&(s-i));
} 