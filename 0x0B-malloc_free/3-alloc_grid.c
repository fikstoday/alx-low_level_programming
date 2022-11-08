#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - pointer malloc grid
 * @width: parameter int
 * @height: parameter height
 *
 * Description: malloc memory for 2 dimensional array
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	size_t i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * width * height);
	if (arr == NULL)
	{
		return (arr);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
