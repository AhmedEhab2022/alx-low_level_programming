#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 *
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: pointer to struct new dog, NULL if it fails.
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (ptr);

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
