#include "main.h"

/**
* more_numbers - function prints 10 times the numbers, from 0 to 14
* @void: no parameter passed
* Return: no return
*/

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c[] = "01234567891011121314";
		int j = 0;

		while (c[j] != '\0')
		{
			_putchar(c[j]);
			j++;
		}
		_putchar(i);
		_putchar('\n');
	}
}
