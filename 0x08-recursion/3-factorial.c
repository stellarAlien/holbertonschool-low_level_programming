#include"main.h"
/**
 * _factorial - calculates factorial of a number
 * @n : integer to calcualte it's factor
 * Return : returns n factorial n!
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n > 0)
{
return (n * factorial(n - 1));
}
else
return (1);
}
