#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: int arguments no
 * @argv: pointer to char
 *
 * Description: multiply only 2 numbers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int product, value1, value2;

	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (0);
	}
	value1 = atoi(argv[1]);
	value2 = atoi(argv[2]);
	product = value1 * value2;
	printf("%d\n", product);
	return (0);
}
