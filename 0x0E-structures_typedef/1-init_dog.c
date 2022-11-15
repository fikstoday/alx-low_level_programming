#include "dog.h"

/**
 * init_dog - function holds struct
 * @d: pointer to struct
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 *
 * Description: initialize struct
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

