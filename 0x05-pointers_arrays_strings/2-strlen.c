#include "main.h"
#include <stdio.h>

/**
* _strlen - function that returns the length of a string
* @s: parameter to function
* Return: Always 0.
*/
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
