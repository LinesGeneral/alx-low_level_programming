#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - takes given numbers and prints them with a separator
* @separator: first parameter is of char data type
* @n: second parameter is an int data type
*
* Return: no return (void function)
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int count;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		count = va_arg(numbers, int);
		printf("%d", count);

		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(numbers);
	printf("\n");
}
