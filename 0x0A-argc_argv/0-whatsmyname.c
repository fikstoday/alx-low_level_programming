#include <stdio.h>

/**
 * main - entry point
 * @argc: count
 * @argv: array of values
 *
 * Description: prints out name of file
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
