#include "function_pointers.h"

/**
 * int_index - find index of ele
 * @array: pointer to int
 * @size: int
 * @cmp: pointer to int
 *
 * Description: compare ele find match return index
 * Return: -1 or index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
		{
			return (i);
		}
	}
	return (-1);
}
