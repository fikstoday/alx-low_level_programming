#include "main.h"

/**
 * jack_bauer - start here
 * @void: parameter is void
 *
 * Description: print time countdown in 24 hour format
 * Return: returns 0
 */
void jack_bauer(void)
{
	int top, next;

	for (next = 0; next < 60; next++)
	{
		if (top < 10 && next < 10)
		{

			_putchar('0');
			_putchar(top);
			_putchar(':');
			_putchar('0');
			_putchar(next);
			/* printf("0%d:0%d\n", top, next); */
		}
		if (top > 10 && next < 10)
		{
			_putchar(top + '0');
			_putchar(':');
			_putchar('0');
			_putchar(next + '0');
			/* printf("%d:0%d\n", top, next); */
		}
		if (top >= 10 && next >= 10)
		{
			_putchar(top + '0');
			_putchar(':');
			_putchar(next + '0');
			/* printf("%d:%d\n", top, next); */
		}
		_putchar('\n');
	}
}
