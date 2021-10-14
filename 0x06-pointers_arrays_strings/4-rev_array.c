#include"main.h"
/*
* reverse_array : reversa an array
* @*a :array
* @n :array size
*/
void reverse_array(int *a, int n)
{
int x,j,i;
j = n-1;
while (i != j)
{
x = a[i];
a[i] = a[j];
a[j] = x;
j--;
i++;
}
}