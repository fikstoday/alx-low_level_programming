#include "main.h"

/**
 * _islower - entry for function
 * @c: parameter is int c
 *
 * Description: return umber 1 if c is lowercase
 * Return: returns 1 or 0
 */
int _islower(int c)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int val;

	for (i = 0; i < 26; i++)
	{
		if (c == str[i])
		{
			val = 1;
		}
		else
		{
			val = 0;
		}
	}
	return (val);
}
