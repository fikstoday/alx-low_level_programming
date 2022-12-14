#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - function pointer to print
 * @name: pointer to char
 * @f: functio pointer
 *
 * Description: pass name to func pointer to print
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
