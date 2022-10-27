#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: pointer to char
 * @s2: pointer to char
 *
 * Description: compare two strings till null byte
 * Return: pointer value s1 subtract pointer value s2
 */
int _strcmp(char *s1, char *s2)
{
	char a, b;

	a = *s1;
	b = *s2;
	while (a == b)
	{
		if (a != '\0')
		{
			return (a - b);
		}
		*s1++;
		*s2++;
	}
	return (a - b);
}
