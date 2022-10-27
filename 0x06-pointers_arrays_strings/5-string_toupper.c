#include "main.h"

/**
 * string_toupper - lowercase to uppercase
 * @sr: pointer to char
 *
 * Description: lowercase string input turned to uppercase
 * Return: pointr address
 */
char *string_toupper(char *sr)
{
	int i;

	for (i = 0; sr[i]  != '\0'; i++)
	{
		if (sr[i] >= 'a' && sr[i] <= 'z')
		{
			printf("figure %d\n", sr[i] = sr[i] - 32);
		}
	}
	return (&sr[0]);
}
