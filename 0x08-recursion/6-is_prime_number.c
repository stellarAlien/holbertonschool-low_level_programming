#include"main.h"
/**
 *  is_prime_number  - checks if n is prime
 *  @n :integer to check
 *  Return : 1 if prime else 0
 */
int is_prime_number(int n)
{
if ((n == 1) || (n < 0))
{
return(0);
}
else
return(isprime(2,n));
}
/**
 * verif - verif if n is prime
 * @n : number to check
 * Return : 1 if n is prime else 0
 */
int isprime( int i; int n)
{
if ( i > n)
{
return(1);
}
if ( (n % i) == 0)
{
return (0);
}
else 
return(isprime(++i,n));
}

