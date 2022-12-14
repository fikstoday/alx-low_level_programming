#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

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
	}
	if (d->name == NULL || d->owner == NULL)
	{
		printf("(nil)");
	}
	printf("%s\n%f\n%s\n", d->name, d->age, d->owner);
}
