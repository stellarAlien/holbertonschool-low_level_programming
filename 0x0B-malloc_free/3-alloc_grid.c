#include<stdlib.h>
#include<stdio.h>
/**
 *alloc_grid - initializes 2d array with zeo
 *@width: width of array
 *@height: height of array
 *Return: Null if width or height == 0 else arr 
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **arr;
if (width == 0 || height == 0)
{
return (NULL);
}
arr = malloc(sizeof(int *) * height);
  if (arr == NULL)
  {
     fprintf(stderr, "not enough memory");
    free(arr);
    return (NULL);
  }
    
  for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int) * width);
  if (*(arr + i) == NULL)
  {
    for (j = 0; j < width; j++)
    {
      free(arr[j]);
   }
     fprintf(stderr, "not enough memory");
    free(arr[i]);
    return (NULL);
  }  
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}

