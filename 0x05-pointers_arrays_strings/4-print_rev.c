#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: parameter of pointer int s
 *
 * Description: takes a string thn returns it in reverse
 * Return: nothing to return
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	;
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
