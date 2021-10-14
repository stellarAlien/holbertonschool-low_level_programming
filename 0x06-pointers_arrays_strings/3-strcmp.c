#include"main.h"
/* _strcmp _ comapres two strings 
* @s1 :first string
* @s2 :second string
*/
int _strcmp(char *s1, char *s2)
{
int i, v;
while(s1[i] && s2[i] )
{
if(s1[i] < s2[i])
{
v = -1;
break;    
}
else if (s1[i] > s2[i] ) 
{
v =1;
break;
}
else
continue;
}
if(s1[i] == '\0' && !(v))
{
v = -1;
}
else if ( s2[i] == '\0' && !(v))
{
v = 1;    
} 
else 
{
v = 0;
}
return(v);
}