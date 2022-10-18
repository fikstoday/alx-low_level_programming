#include "main.h"

/**
 * main - entry point
 * @void: parmeter is void
 *
 * Description: str sent to _putchar to output
 * Return: returns 0
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
