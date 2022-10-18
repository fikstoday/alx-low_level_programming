#include "main.h"

void print_alphabet(void);

/**
 * main - entry point
 * @void: parameter is void
 *
 * Description: main execution
 * Return: returns 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

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
