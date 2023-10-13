#include "main.h"

/**
* print_most_numbers - print numbers from 0 - 9
* @void: no argument passed
* Return: Always 0 but no need
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
