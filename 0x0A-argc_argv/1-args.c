#include <stdio.h>

/**
 * main -entry
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Description: print count of supplied arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
