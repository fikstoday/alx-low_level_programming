#include "main.h"

/**
 * print_line - print space or undesrcore
 * @n: parameter is int n
 *
 * Description: prints newline if n equal to zero or less
 * Return: returns nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
