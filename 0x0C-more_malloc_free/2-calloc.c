#include "main.h"
#include <stdlib.h>

/**
 * _calloc - array malloc memory
 * @nmemb: int parameter
 * @size: int size
 *
 * Description: assign array memory via malloc
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(size) * nmemb);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
