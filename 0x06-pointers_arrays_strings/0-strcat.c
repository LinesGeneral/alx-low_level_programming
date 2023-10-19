#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - function appends scr string to dest string
 * @dest: first char parameter to _strcat function
 * @src: second char parameter to _strcat function
 * Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (0);
}
