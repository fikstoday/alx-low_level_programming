#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print dog struct
 * @d: pointer to struct
 *
 * Description: print out a struct
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("");
	}
	if (d.name == NULL || d.age == NULL || d.owner == NULL)
	{
		printf("(nil)");
	}
	printf("%s\n%d\n%s\n", d);
}
