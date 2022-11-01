#include "main.h"

/**
 * _memset - set a char value
 * @s: parameter is pointer to char
 * @b: parameter is char
 * @n: parameter is unsigned int
 *
 * Description: a char is set based on n
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
