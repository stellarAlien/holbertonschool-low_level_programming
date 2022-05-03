#include "search_algos.h"
/**
 *linear_search - searches an element in an array linearly
 *
 * @array: pointer t ostart of array
 * @size: size of initial array
 * @value: value to search for
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	int *a;
	size_t i;

	if (array == NULL)
		return (-1);
	a = array;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, a[i]);
		if (a[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
