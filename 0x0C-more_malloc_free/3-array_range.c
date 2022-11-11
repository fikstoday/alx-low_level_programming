#include "main.h"
#include <stdlib.h>

/**
 * array_range - insert range
 * @min: parameter is int
 * @max: top
 *
 * Description: insert range into malloc array
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr, i;

	arr = malloc(sizeof(int *) * max);
	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}
	return (arr);
}
