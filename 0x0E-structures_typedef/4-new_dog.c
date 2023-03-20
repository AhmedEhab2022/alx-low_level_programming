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
	char *new_name, *new_owner;

	new_name = malloc(sizeof(*name));

	if (new_name == NULL)
		return (NULL);

	new_name = name;

	new_owner = malloc(sizeof(*owner));

	if (new_owner == NULL)
		return (NULL);

	new_owner = owner;
	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (ptr);

	ptr->name = new_name;
	ptr->age = age;
	ptr->owner = new_owner;

	return (ptr);
}
