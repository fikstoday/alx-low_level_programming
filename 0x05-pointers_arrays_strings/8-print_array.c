#include "main.h"

/**
 * print_array - print integer array
 * @a: parameter is pointer of int
 * @n: parameter of int n
 *
 * Description: print selscted no of integers in array
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int *ptr, i;

	ptr = &a[0];
	for (i = 0; i < n; i++)
	{
		printf("%d, ", *ptr);
		ptr++;
	}
}
