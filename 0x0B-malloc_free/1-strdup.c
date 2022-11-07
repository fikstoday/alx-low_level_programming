#include "main.h"

/**
 * _strdup - copy string
 * @str: pointer to char
 *
 * Description: copy str to new string with malloc memory allocation
 * Return: null or pointer
 */
char *_strdup(char *str)
{
	int len, j;
	char *arrstr = NULL;

	if (size == 0)
	{
		return (arrstr);
	}
	for (len = 0; str[len] != '\0'; len++)
	;
	arrstr = malloc(sizeof(char) * len);
	if (arrstr == NULL)
	{
		return (arrstr);
	}
	for (j = 0; j < sizeof(arrstr); j++)
	{
		arrstr[j] = str[j];
	}
	return (arrstr);
}
