#include "main.h"

/**
 * _strcat - appends string
 * @dest: paremeter is a pointer to char
 * @src: parameter is a pointer to char
 *
 * Description: string append to dest
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, len;
	char *ptr;

	for (len = 0; dest[len] != '\0'; len++)
	;
	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] += ptr[i];
	}
	return (&dest[0]);
}
