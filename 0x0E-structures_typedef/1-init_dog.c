#include "dog.h"

/**
* init_dog - function initializes a variable of type struct dog
* @d: first parameter
* @name: second parameter
* @age: third parameter
* @owner: fourth parameter
*
* Return: no return (void function)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
