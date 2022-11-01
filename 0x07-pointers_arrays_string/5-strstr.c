#include "main.h"

/**
 * _strstr - match first string
 * @haystack: pointer to char
 * @needle: pointer to char
 *
 * Description: match string from parameter needle
 * Return: pointer or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *tmp = NULL;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				if (haystack[i + 1] == needle[j + 1])
				{
					return (tmp = &haystack[i]);
				}
			}
		}
	}
	return (tmp);
}
