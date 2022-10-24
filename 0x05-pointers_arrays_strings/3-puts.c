#include "main.h"

/**
 * _puts - prints to stdout
 * @str: parameter is pointer of char
 *
 * Description: prints a string
 * Returns: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
