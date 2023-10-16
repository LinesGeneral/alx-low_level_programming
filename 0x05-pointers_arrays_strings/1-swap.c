#include <stdio.h>
#include "main.h"

/**
* swap_int - swaps the value of two integers
* @a: first value of type int
* @b: second value of type int
* Return: nothing to return
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
