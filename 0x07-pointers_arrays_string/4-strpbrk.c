#include "main.h"

/**
 * _strpbrk - match first character
 * @s: parameter is pointer to char
 * @accept: pointer to char
 *
 * Description: very first charcter that matches s from accept
 * Return: pointer or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *tmp = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				return (tmp = &s[j]);
			}
		}
	}
	return (tmp);
}
