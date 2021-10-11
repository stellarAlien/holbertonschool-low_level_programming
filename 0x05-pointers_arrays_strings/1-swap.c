#include"main.h"
/**
 * swap_int : see function
 * @*a:var 1
 * @*b: var2
 */
void swap_int(int *a, int *b)
{
int aux;
aux= *a;
*a = *b;
*b = aux;
}
