#include "main.h"

/**
 * _isalpha - function declaration
 * @c: parameter is int c
 *
 * Description: return 1 if c is a letter
 * Return: returns 1 or 0
 */
int _isalpha(int c)
{
	char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		if (c == str[i])
		{
			return (1);
		}
	return (0);
}
