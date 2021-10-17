#include<stdio.h>
#include<string.h>
/**
* reverse_array : reverse an array
* @*a :array
* @n :array size
*/
void reverse_array(int *a, int n)
{
int x, j, i;
j = n  - 1;
if( (j%2) != 0 )
while (i++ != j)
{
x = a[i];
a[i] = a[j];
a[j] = x;
j--;
i++;
}
else{
while(i != j)
{
x = a[i];
a[i] = a[j];
a[j] = x;
j--;
i++;
}
}
}
}
