#include "main.h"

/**
 * how_prime - iterate over possible prime
 * @n: int number
 * @i: int iterator
 *
 * Description: recurse from 2 to n-1
 * Return: 0 or 1
 */
int how_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (how_prime(n, i + 1));
}
/**
 * is_prime_number - chexk if number is prime
 * @n: int number
 *
 * Description: recursive function
 * Return: a recursive function
 */
int is_prime_number(int n)
{
	return (how_prime(n, 1));
}
