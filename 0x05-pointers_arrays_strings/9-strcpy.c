#include "main.h"
#include <stdio.h>

/**
* _strcpy - copies strings.
* @dest: destination.
* @src: source.
* Return: Always 0 (Success)
*/
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
