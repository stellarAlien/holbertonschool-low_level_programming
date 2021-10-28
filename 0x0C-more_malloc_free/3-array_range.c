#include<stdlib.h>
/**
 * array_range - returnsarray of integers
 * @min: minimium value
 * @max: maximium value
 * Return: arr
 */
int *array_range(int min, int max)
{
	int i;
	int arr[max - min];

	if( min > max)
	{
		return(NULL);
	}
	arr = calloc(max - min,sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
		for(i = min; i < max - min; i++)
		{
			arr[j] = i;
			j++;
		}
		return(arr);
}
