#include <time.h>
#include<stdlib.h>
/*
*determinesthe nature of n
*/
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (n < 0)
					{
					printf("%d is negative", n);
					}
					else if (n == 0)
					{
						printf("%d is zero", n);
					}
					else
					{
						printf("%d is positive", n);
					}
					return (0);
}
