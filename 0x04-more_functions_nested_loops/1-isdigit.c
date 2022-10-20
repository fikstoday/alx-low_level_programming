#include "main.h"

/**
 * _isdigit - start here
 * @c: parameter is c
 *
 * Return: returns 1 or 0
 */
int _isdigit(int c)
{
	char chr;

	for (chr = '0'; chr < '9'; chr++)
	{
		if (c >= chr)
		{
			return (1);
		}
		return (0);
	}
}
