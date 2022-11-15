#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - make a dog
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 *
 * Description: store a copy of struct dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog));
	if (dog == NULL)
	{
		return NULL;
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
