#include "main.h"

/**
 * mul - multiply two integers
 * @a: parameter is a
 * @b: parameter 2 is int b
 *
 * Description: two integers are multiplied
 * Return: return 0
 */
int mul(int a, int b)
{
	int mul2 = a * b;

	_putchar((mul2 / 10) + '0');
	_putchar((mul2 % 10) + '0');
	return (0);
}
