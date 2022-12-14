#include "main.h"

/**
 * print_last_digit - start here
 * @last: parameter is int last
 *
 * Description: get the last digit
 * Return: return last digit
 */
int print_last_digit(int last)
{
	int digit = last % 10;

	if (digit < 0)
	{
		digit = -digit;
	}
	_putchar('0' + digit);

	return (digit);
}
