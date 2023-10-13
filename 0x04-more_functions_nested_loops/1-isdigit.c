#include <stdio.h>
#include "main.h"

/**
* _isdigit - check for a digit (0 - 9)
* @c: parameter used to run digit test
* Return: 1 if c is digit and 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
