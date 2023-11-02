#include "main.h"

/**
* _isalpha - check if character is an alphabet
*
* @c: takes input from given function
* Return: 1 if check is true else 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c < 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
