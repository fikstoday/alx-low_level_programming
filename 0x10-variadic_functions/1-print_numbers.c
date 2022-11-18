#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

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
		if (separator != NULL && i != (n-1))
		{
			printf("%s%d", separator, va_arg(ap, int));
		}
		else if (separator == NULL)
		{
			printf("%d", va_arg(ap, int));
		}
	}
	printf("\n");
}
