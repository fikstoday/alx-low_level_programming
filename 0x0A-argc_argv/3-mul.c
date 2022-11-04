#include <stdio.h>

/**
 * main -entry
 * @argc: number of arguments
 * @argv: array of argumnets
 *
 * Description: print multiplication of 2 numbers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	for (i = 0; i < argc; i++)
	{
		sum += atoi(agrv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
