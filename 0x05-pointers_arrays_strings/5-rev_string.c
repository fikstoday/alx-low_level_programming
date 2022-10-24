#include "main.h"

/**
 * rev_string - string reversal
 * @s: parameter pointer is int s
 *
 * Description: reverse an array of strings
 * Return: nothing
 */
void rev_string(char *s)
{
	char *ptr;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	;

	ptr = &s[i - 1];
	for (j = 0; j < i; j++)
	{
		s[j] = *ptr;
		ptr--;
	}
}
