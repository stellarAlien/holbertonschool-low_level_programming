#include "calc.h"
void main(int argc, char *argv[])
{
int x, y, *f(int, int), v;
  op_t ops[] = {
	          {"+", op_add},
		          {"-", op_sub},
			          {"*", op_mul},
				          {"/", op_div},
					          {"%", op_mod},
						          {NULL, NULL}
		};
	if (argc != 4 )
	{
		printf("ERROR");
		exit (98);
	}
v = 0;
x = atoi(argv[1]);
y =atoi(argv[3]);
f = get_op_func(argv[2][0])
	if (f == NULL)
	{
		printf("ERROR");
		exit(99);
	}
		
	else if((f == op_div || f == op_mod) && y == 0)
	{
		printf("ERROR");
		exit (100);
	}
	x = f(x, y);
	printf("%d\n", x);
	return (x);
}

