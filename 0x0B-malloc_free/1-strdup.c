#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

	if (str == NULL)
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
	for (j = 0; j < len; j++)
	{
		arrstr[j] = str[j];
	}
	arrstr[len + 1]  = '\0';
	return (arrstr);
}
