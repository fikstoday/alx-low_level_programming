#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	int len, i;

	for (len = 0; s2[len] != '\0'; len++)
	;
	s1 = malloc(sizeof(char) * len);
	for (i = 0; s2[i] != '\0'; i++)
	{
		s1[len + i] = s2[i];
	}
	return (s1);
}
