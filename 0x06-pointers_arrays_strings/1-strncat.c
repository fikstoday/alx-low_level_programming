#include "main.h"

/**
 * _strncat - cocatenate files
 * @dest: pointer to char
 * @src: pointer to char
 * @n: int parameter
 *
 * Description: cocatentate src contents to dest
 * Return: pointer address
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;                                                                                                                         char *ptr;
	  
	for (i = 0; dest[i] != '\0'; len++)
	;
	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] += ptr[i];
	}
	return (&dest[0]);
}
