#include <stdio.h>
/**
*main - see function
*return : always 0
*/
boolean prime( int n)
{
boolean v;
int i;
for(i = 2;i <= n/2; i++){
if((n % i) == 0)
{
v=1;
break;
}
}  
return (v);
} 
int main (void)
{
long int i,n,m;
n=612852475143;
for (i = 1; i <= n/2 ; i++)
{
if(!prime(i))
{
m=i;
}
printf("%dl\n", m);
return (0);
}
