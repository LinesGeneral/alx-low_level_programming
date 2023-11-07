#include <stdio.h>
#include "dog.h"

/**
* print_dog - function prints a struct dog
* @d: only parameter
*
* Return: no return (this is a void function)
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
