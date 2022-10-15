#include <stdio.h>

/**
 * main - entry point
 * @void: parameter is void
 *
 * Description: list alphabet in reverse
 * Return: returns 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
