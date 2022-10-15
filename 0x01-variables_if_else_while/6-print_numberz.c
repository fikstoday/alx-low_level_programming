#include <stdio.h>

/**
 * main - entry point
 * @void: parameter is void
 *
 * Description: list sinle digit no
 * Return: returns 0
 */
int main(void)
{
	int val;

	for (val = 0; val < 10; val++)
	{
		putchar('0' + val);
	}
	putchar('\n');
	return (0);
}
