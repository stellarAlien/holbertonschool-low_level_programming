#include "main.h"
/**
 * verif - verifies if number is prime
 * @n: integer to check if prime
 * Return: 1 if 
 */
int verif(int n, int i, float ran)
{
	if (i == (int)(ran))
	{
		if ((n % i) == 0)
		{ 
			return(0);
		}
		else 
			return (1);
	}
	else if ((n % i) 

	return (1);
}
/**
 *is_prime_number: checks if number is prime
 *@n: number to check
 */
int is_prime_number(int n)
{
	int i;
	i = verif(n);
	return(i);
}
