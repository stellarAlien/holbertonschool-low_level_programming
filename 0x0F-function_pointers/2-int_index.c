/**
 *int_index - returns index of element
 *@array: array to check
 *@size: size of array
 *@cmp: pointer to a function
 *Return: position of element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if  (size <= 0)
		return (-1);
	else if (array && cmp)
	{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	}
	else
		return (-1);
}
