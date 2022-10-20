#include "main.h"

/**
 * _isupper - start her
 * @c: parameter is int c
 *
 * Return: returns 1 or 0
 */
int _isupper(int c)
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (c == str[i])
		{
			return (1);
		}
	}
	return (0);
}
