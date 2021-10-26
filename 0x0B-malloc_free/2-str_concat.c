#include<stdlib.h>
#include<stdio.h>
/**
 *  *  * str_concat - concats two strings
 *   *   * @s1:string uno
 *    *    * @s2: another string
 *     *     *Return: Null if malloc fails and s if not
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *s;
	if (s1 == NULL)
	{
		i = 0;
	}
	else
		while (s1[i] != '\0')
		{
			i++;
		}
}
if(s2 === NULL)
{
	j = 0;
}
else
while (s2[j] != '\0')
{
	j++;
}          	  
s = (char*)malloc(sizeof(char) * (i + j) + 1);                                                                                                                
for (k = 0; k < i; k++)
{
	s[k] = s1[k];
}    
for (k =0; k < j; k++)
{
	s[k + i] = s2[k];
}
s[i + k] = '\0';
return(s);
}
