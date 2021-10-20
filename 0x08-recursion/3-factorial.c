#include"main.h"
/**
 * factorial(int n) - calculates factorial of a number
 * @n : integer to calcualte it's factor
 */
int factorial(int n)
{
if ( n < 0)
{
return (-1);
}
else if ( n > 0) 
{
return ( n * factorial(n - 1)):
}
else 
return(1);
}
