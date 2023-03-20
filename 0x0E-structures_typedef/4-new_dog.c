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
	int i, j;
	dog_t *ptr;
	char *new_name, *new_owner;

	i = j = 0;
	new_name = malloc(sizeof(*name));

	if (new_name == NULL)
		return (NULL);

	while (name[j] != '\0')
	{
		new_name[j] = name[j];
		j++;
	}

	new_name[j] = '\0';

	new_owner = malloc(sizeof(*owner));

	if (new_owner == NULL)
		return (NULL);

	while (owner[i] != '\0')
	{
		new_owner[i] = owner[i];
		i++;
	}

	new_owner[i] = '\0';

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (ptr);

	ptr->name = new_name;
	ptr->age = age;
	ptr->owner = new_owner;

	return (ptr);
}
