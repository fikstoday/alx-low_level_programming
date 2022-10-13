#include <stdio.h>

/**
 * main - entry file
 * @void: void is the parameter
 *
 * Description: starting point
 * Return: returns 0
 */
int main(void)
{
	printf("Size of a char: %lu byte(s),\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s),\n", (unsigned long)sizeof(int));
	printf("Size of long int: %lu byte(s),\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s),\n", (unsigned long)sizeof(long long int);
	printf("Size of a float: %lu byte(s),\n", (unsigned long)sizeof(float));
	return (0);
}
