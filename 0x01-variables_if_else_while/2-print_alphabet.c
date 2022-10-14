#include <stdio.h>

/**
 * main - entry file
 * @void: parameter is void
 *
 * Description: display alphabet in lowercase
 * Return: returns 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
