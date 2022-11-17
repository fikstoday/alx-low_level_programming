#include <stdarg.h>

/**
 * sum_them_all - all args sum
 * @n: unsigned int
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list ap;

	sum = 0;
	va_start(ap, n);
	for (i = 0l i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
