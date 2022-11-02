#include "main.h"

/**
 * _print_rev_recursion - string in reverse
 * @s: pointer to char
 *
 * Description: reverse string without loops
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
