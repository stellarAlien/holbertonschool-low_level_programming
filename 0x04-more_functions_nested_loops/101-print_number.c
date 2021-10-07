#include "main.h"
/* print_number - see function
* return : always 0
*/
void print_number(int n)
{
int x;
while(n > 10)
{
    x=n % 10;
    n = (int)n / 10;
    printf('%d', x);
}
printf('%d', n);
}
