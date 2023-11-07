#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* new_dog - function creates a new dog
* @name: first member
* @age: second member
* @owner: third member
*
* Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->name = strdup(name);
	new_dog_ptr->owner = strdup(owner);

	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
