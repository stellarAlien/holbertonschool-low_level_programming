#include<stdio.h>
#inlcude"function_pointers.h"
/**
 *array_iterator - iterate an action on an array
 *@array: array to go through
 *@size: size of array
 *@action: pointer to action function
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array != NULL && action != NULL) || size > 0)
	{
	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
	}
}
