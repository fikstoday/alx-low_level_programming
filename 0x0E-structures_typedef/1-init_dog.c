#include "main.h"
#include <stdlib.h>

/**
 * init_dog - function holds struct
 * @d: pointer to struct
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 *
 * Description: initialize struct
 * Return: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dogg;

	dogg = malloc(sizeof(struct d));
	if (dogg == NULL)
	{
		return (NULL);
	}
	dogg->name = name;
	dogg->age = age;
	dogg->owner = owner;
	return (dogg);
}

