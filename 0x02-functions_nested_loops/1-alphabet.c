#include "main.h"

/**
* print_alphabet - Entry point for function
*
* Return: Always 0 (success)
*/
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
