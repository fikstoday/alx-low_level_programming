#include <stdio.h>

/**
 * main - entry
 * @argc: argument count
 * @argv: arguments array
 *
 * Description: print argument followed by new line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
