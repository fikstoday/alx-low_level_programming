#include "main.h"

/**
 * reverse_array - change array direction
 * @a: pointer to int
 * @n: int n
 *
 * Description: reverse an array given size
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp[n];

	i = n;

	for (j = 0; j < n; j++)
	{
		tmp[j] = a[i];
		i--;
	}
	for (j = 0; j < n; j++)
	{
		a[j] = tmp[j];
	}
}
