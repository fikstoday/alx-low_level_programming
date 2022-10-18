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
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
	return (0);
}
