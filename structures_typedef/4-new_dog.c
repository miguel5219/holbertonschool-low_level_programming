#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - function that creates a new dog
  * @name: name dog
  * @age: age dog
  * @owner: owner dog
  * Return: 0
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *x_dog;
	int i;
	int new_name;
	int new_owner;

	x_dog = malloc(sizeof(dog_t));
	if (x_dog == NULL || !name || !owner)
	{
		free(x_dog);
		return (NULL);
	}
	for (new_name = 0; name[new_name]; new_name++)
	;
	for (new_owner = 0; owner[new_owner]; new_owner++)
	;
	x_dog->name = malloc(new_name + 1);
	x_dog->owner = malloc(new_owner + 1);

	if (!x_dog->name || !x_dog->owner)
	{
	free(x_dog->owner);
	free(x_dog->name);
	free(x_dog);
	return (NULL);
	}
	for (i = 0; i < new_name; i++)
	x_dog->name[i] = name[i];
	x_dog->name[i] = '\0';
	x_dog->age = age;

	for (i = 0; i < new_owner; i++)
	x_dog->owner[i] = owner[i];
	x_dog->owner[i] = '\0';
	return (x_dog);
}
