#include "main.h"
#include <stdlib.h>

/**
 * _strlen - string length
 * @q: pointer to char
 *
 * Description: get string length
 * Return: length of string
 */
int _strlen(char *q)
{
	int len = 0;

	while (*q != '\0')
	{
		len++;
		q++;
	}
	return (len);
}
/**
 * string_nconcat - cancate string
 * @s1: pointer to char
 * @s2: pointer to char
 * @n: parameter int
 *
 * Description: concatenate string s1 based on int n
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p3;
	int i, j, size1, size2;

	size1 = _strlen(s1);
	printf("%d\n", size1);
	p3 = malloc(sizeof(char) * size1);
	for (i = 0; i < size1; i++)
	{
		p3[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		p3[i] = s2[j];
	}
	p3[j] = '\0';
	return (p3);
}
