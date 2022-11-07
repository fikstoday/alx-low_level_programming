#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * length - string length
 * @str: pointer to str
 *
 * Description: returns string length of pointer
 * Return: number
 */
int length(char *str)
{
	int len = 0, i = 0;

	while (str[i] != '\0')
	{
		len = len + 1;
		i++;
	}
	return (len);
}
/**
 * str_concat - concatentate one string to s1
 * @s1: pointer to char
 * @s2: pointer to char
 *
 * Description: concatentate s2 to s1
 * Return: pointer or null
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, i, j;
	char *tmp;

	len1 = length(s1);
	len2 = length(s2);
	tmp = malloc(sizeof(char) * (len1 + len2 + 1));
	for (i = 0; s1[i] != '\0'; i++)
	{
		tmp[i] = s1[i];
	}
	j = i;
	for (i = 0; s2[i] != '\0'; i++, j++)
	{
		tmp[j] = s2[i];
	}
	tmp[j] = '\0';
	return (tmp);
}
