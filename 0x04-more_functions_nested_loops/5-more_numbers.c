#include "main.h"

/**
 * more_numbers - 0 -> 14
 * @void: parameter is void
 *
 * Description: print from 0 to 14
 * Return: returns nothing
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 14; j++)
		{
			char max = j > 9 ? (j / 10 + '0') : (j + '0');

			_putchar(max);
			if (j < 9)
			{
				continue;
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
