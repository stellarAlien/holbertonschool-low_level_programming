#include "calc.h"
/*
 *
 */
int (*get_op_func(char *s))(int, int)
{
	if (s == "+")
		return op_add(a,b);
	else if (s == "-")
		return op_sub(a,b);
	else if (s == "/")
		return op_div(a,b);
	else if (s == "*")
		return op_mul(a,b);
	else if (s == "%")
		return op_mod(a,b);
	else
		return NULL;
}


