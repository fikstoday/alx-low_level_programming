#include <stdio.h>
#include <stdlib.h>

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
	int i, product;
	
	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < 3; i++)
	{
		product *= atoi(argv[i]);
	}
	printf("%d\n", product);
	return (0);
}
