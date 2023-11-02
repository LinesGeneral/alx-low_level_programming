#include "main.h"
#include <stdio.h>

/**
* _puts - function prints a string, followed by new line
* @str: required parameter
* Return: Always 0.
*/
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
