#include <stdio.h>

/**
 * main - entry file
 * @void: parameter is void
 *
 * Description: display lowercase+uppercase
 * Return: returns 0
 */
int main(void)
{
	char ch;

	for (ch = 97; ch <= 121; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
