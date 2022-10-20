#include "main.h"
/**
 * print_diagonal - diagonal printing
 * @n: parameter is int n
 *
 * Description: prints diagonal line plus newline
 * Return: returns nothing
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		else
		{
			j = 0;
			_putchar(92);
			_putchar('\n');
			while (j < i + 1)
			{
				_putchar(32);
				j++;
			}
		}
	}
}
