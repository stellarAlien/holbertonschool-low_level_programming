#include<stdlib.h>
/**
 * array_range - returnsarray of integers
 * @min: minimium value
 * @max: maximium value
 * Return: arr
 */
int *array_range(int min, int max)
{
	int i, *arr, ran;

	if (min > max)
	{
		return (NULL);
	}
	ran = (max - min) + 1;
	arr = malloc(sizeof(int) * ran);
	if (arr == NULL)
	{
		return (NULL);
	}
		for (i = 0; i < ran; i++)
		{
			arr[i] = min + i;
		}
		return (arr);
}
