#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
size_t i;
va_list(l);

	if (n == 0)
		return;
	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d ", va_arg(l, int));
		}
			else
			{
				if (i == n - 1)
				printf("%d", va_arg(l, int));
				else
				{
					printf("%d%s", va_arg(l, int), separator);
				}

			}
	}
	printf("\n");
	va_end(l);
}

