#include "main.h"

/**
* print_line - function draws a straight line in the terminal
* @n: parameter passed to function
* Return: no return
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
