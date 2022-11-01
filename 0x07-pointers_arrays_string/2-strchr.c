#include "main.h"

/**
 * _strchr - find first character
 * @s: pointer to char
 * @c: char parameter
 *
 * Description: find first occurence and return
 * Return: null or pointer
 */
char *_strchr(char *s, char c)
{
	int i;
	char *tmp = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (&s[i]);
		}
	}
	return tmp;
}
