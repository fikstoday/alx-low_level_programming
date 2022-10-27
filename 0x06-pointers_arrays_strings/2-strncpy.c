#include "main.h"

/**
 * _strncpy - copy based on int n
 * @dest: pointer to char
 * @src: pointer to char
 * @n: int n
 *
 * Description: copy from src to dest based on number in int n
 * Return: pointer address
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return dest; 
}
