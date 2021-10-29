#include "main.h"
/**
 * verif - verifies if number is prime
 * @n: integer to check if prime
 * Return: 1 if 
 */
int verif(int n)
{
	float i, ran;
	ran = n/2;

	for (i = 2; i <= ran; i++)
	{
		if ((n % (int)(i)) == 0)
		{
			return(0);
		}
	}
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
