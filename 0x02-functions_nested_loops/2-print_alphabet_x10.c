#include "main.h"

/**
 * print_alphabet_x10 - number 1 function
 * @void: parameter is void
 *
 * Description: display lowercase alphabet 10 times
 * Return: nothing to return
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
