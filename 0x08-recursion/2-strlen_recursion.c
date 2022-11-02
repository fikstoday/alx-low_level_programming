#include "main.h"

/**
 * _strlen_recursion - count string length
 * @s: pointer to char
 *
 * Description: string length via recursion
 * Return: count
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(char *s);
	}
	return (count);
}
