#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: int
 * @argv: pointer to char
 *
 * Description: add numbers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
