#include "main.h"

/**
 * factorial - factorial by recursion
 * @n: parameter is int
 *
 * Description: recursion to find factorial
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n < 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
