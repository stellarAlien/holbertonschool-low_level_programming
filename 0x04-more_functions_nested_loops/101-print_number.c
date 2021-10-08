#include "main.h"
#include<math.h>
/* print_number - see function
* return : always 0
*/
void print_number(int n)
{
int x,i;
i=log10(n);
for (; i > 0; i--)
{    
x = n / 10 * i;
n = n - 10 * i * x;
_putchar("%d n= \n", n);
_putchar("%d x= \n", n)
    
}
_putchar('%d',n);
}
