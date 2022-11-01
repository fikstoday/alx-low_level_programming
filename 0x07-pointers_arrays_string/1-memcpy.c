#include "main.h"

/**
 * _memcpy - copy src to dest n times
 * @dest: pointer to char
 * @src: pointer to char
 * @n: unsigned int
 *
 * Description: copy char from src to dest until n
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
