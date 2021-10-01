#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */
/**
 * *main -display the last digit of n
 *  *return: 0
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					printf("the last digit of %d is ", n);
					if (((n % 10) < 6) && (n % 10) != 0)
					{
						printf("is %d and is less than 6 and not 0", n % 10);
					}
					if ((n % 2) == 0)
					{
						printf("is 0 and is 0");
					}
					else if ((n % 10) > 5)
					{
						printf("is %d and is greater than 5", n % 10);
					}
					return (0);
}
