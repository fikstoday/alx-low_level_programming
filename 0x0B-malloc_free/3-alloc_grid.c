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
	int **arr, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (arr);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int *) * width);
		if (arr[i] == NULL)
		{
			free(arr[i]);
		}
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
