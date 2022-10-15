#include <stdio.h>

/**
 * main - entry point
 * @void: parameter is void
 *
 * Description: list base 10 numbers
 * Return: returns 0
 */
int main(void)
{
	int val;

	for (val = 0; val < 10; val++)
	{
		printf("%d", val);
	}
	printf("\n");
	return (0);
}
