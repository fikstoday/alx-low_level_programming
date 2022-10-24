#include "main.h"

/**
 * puts2 - skip an iteration
 * @str: parameter is pointer of int str
 *
 * Description: print string skipping odd
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
