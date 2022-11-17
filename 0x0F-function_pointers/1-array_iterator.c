#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - print every ele
 * @array: pointer to int
 * @size: size_t
 * @action: pointer to func
 *
 * Description: action func pointer to print arr of ele
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
