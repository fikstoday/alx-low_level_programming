#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocate memory
 * @b: size_t parameter
 *
 * Description: allocate memory return pointer
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *q;

	q = malloc(sizeof(b));
	if (q == NULL)
	{
		exit(98);
	}
	return (q);
}
