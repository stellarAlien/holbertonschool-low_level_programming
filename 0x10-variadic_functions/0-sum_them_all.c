#include<stdio.h>
#include<stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
long int s;
unsigned int i;
s = 0;
	va_list l;

	if (n == 0)
		return (0);
	va_start(l, n);
			for (i = 0; i < n; i++)
			{
					s += va_arg(l, unsigned int);
					
					
				} 
			va_end(l);
			return(s);
}
