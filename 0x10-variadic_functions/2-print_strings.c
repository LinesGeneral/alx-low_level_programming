#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - function prints strings followed by a new line
* @separator: first member
* @n: second member
*
* Return: no return (void function)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mywords;
	unsigned int i;

	va_start(mywords, n);

	for (i = 0; i < n; i++)
	{
		char *words = va_arg(mywords, char *);

		if (words == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", words);
		}
		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(mywords);
	printf("\n");
}
