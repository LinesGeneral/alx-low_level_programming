#include "main.h"

/**
 * _puts_recursion - function prints a string, followed by a new line
 * @s: the parameter is s which is of the char data type
 * Return: no return contains void parameter
*/

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
