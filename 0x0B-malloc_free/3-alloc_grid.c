#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - create a 2-dimensional array with each element set to 0
 * @width: desired number of columns
 * @height: desired number of rows
 *
 * Return: NULL if memory allocation fails or any argument is less than 1,
 *  otherwise return a pointer to the first element of the array.
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i;
	int j;
	int l;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(matrix + i) = (int *)malloc(width * sizeof(int));
		if (*(matrix + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = matrix[i];
				free(p);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[l][j] = 0;
		}
	}
	return (matrix);
}
