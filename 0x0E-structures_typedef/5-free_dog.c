#include <stdio.h>
#include "dog.h"

/**
 * free_dog - release dog poinnter
 * @d: pointer to typedef of struct of dog
 *
 * Description: release memory allocated
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}

