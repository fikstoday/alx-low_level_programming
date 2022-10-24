#include "main.h"

/**
 * puts_half - half of string
 * @str: parameter of pointer int str
 *
 * Description: outputs top half of string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	;
	for (j = i / 2; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
