#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers via variadic
 * @separator: pointer to char
 * @n: unsigned int
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (n <= 0)
	{
		exit(1);
	}
	for (i = 0; i < n; i++)
	{
		if (separator)
		{
			printf("%c %d", *separator, va_arg(ap, int));
		}
		else
		{
			printf(" %d", va_arg(ap, int));
		}
	}
	printf("\n");
}
