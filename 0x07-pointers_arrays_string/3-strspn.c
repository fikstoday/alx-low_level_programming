#include "main.h"

/**
 * _strspn - check first char and count
 * @s: pointer to char
 * @accept: pointer to char
 *
 * Description: given accept charcters, find in s then count
 * Return: count of int
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, i, j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				count++;
			}
		}
	}
	return (count);
}
