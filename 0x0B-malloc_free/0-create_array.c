#include "main.h"
#include <stdlib.h>

/**
 * create_array - array maker
 * @size: unsigned int parameter
 * @c: char input
 *
 * Description: create array of chars
 * Return: null or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (arr);
	}
	arr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
