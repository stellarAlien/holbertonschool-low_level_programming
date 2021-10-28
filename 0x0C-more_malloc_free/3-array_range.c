#include<stdlib.h>
/**
 * array_range - returnsarray of integers
 * @min: minimium value
 * @max: maximium value
 * Return: arr
 */
int *array_range(int min, int max)
{
	int i, j, *arr, ran;

	if( min > max)
	{
		return(NULL);
	}
	ran = (max - min) + 1; 
	arr = (int *)calloc(max - min,sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	*arr = min;
	min++;
		for(i = 0; i < ran; i++)
		{
			arr[i] = min + i;
		}
		return(arr);
}
