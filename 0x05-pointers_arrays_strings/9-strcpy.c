#include "main.h"


/**
 * _strcpy - copy file
 * @dest: parameter of pointer
 * @src: parameter of pointer char
 *
 * Description: copy file from source to destination
 * Return: address of dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (&dest[0]);
}
