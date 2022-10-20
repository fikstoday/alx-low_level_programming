#include "main.h"

/**
 * print_numbers - display 0 upto 9
 *
 * Description: print 0 till 9
 * Return: returns 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
	return (0);
}
