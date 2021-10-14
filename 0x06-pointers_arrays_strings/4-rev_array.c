#include"main.h"
/*
* reverse_array : reversa an array
* @*a :array
* @n :array size
*/
void reverse_array(int *a, int n)
{
int x,i;

if( (n%2) == 0)
{
n = ((n-1)/2);
}
else
n = ((n-2)/2);
for (i = 0 ; i < n/2; i++)
{
x = a[n - i -1];
a[n -i -1] = a[i];
a[i] = x;
}
}