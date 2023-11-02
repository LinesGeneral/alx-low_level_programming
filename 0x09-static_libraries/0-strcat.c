#include "main.h"

/**
 * _strcat - function appends scr string to dest string
 * @dest: first char parameter to _strcat function
 * @src: second char parameter to _strcat function
 * Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		dest[count] = src[count2];
		if (src[count2] == '\0')
		{
			break;
		}
		count++;
		count2++;
	}
	return (dest);
}
