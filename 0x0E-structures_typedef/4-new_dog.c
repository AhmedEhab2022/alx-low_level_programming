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
	int i, j, k, l;
	dog_t *ptr;

	i = j = k = l = 0;
	while (name[j] != '\0')
		j++;
	while (owner[i] != '\0')
		i++;
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (ptr);
	ptr->name = malloc(j * sizeof(char));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		ptr->name[k] = name[k];

	ptr->age = age;
	ptr->owner = malloc(i * sizeof(char));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (l = 0; l <= i; l++)
		ptr->owner[l] = owner[l];

	return (ptr);
}
