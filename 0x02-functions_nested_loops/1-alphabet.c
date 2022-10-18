#include "main.h"

/**
 * print_alphabet - second function
 * @void: parameter is void
 *
 * Description: prints lowercase alphabet
 * Returns: no return statement
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
