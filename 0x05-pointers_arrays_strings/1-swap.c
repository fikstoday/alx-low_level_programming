#include "main.h"

/**
 * swap_int - swapping function
 * @a: parameter is int pointer a
 * @b: parameter pointer of int b
 *
 * Description: two parameters are swapped
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
