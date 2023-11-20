#include <stdio.h>
#include "lists.h"

/**
* print_list - function prints all the elements of a list
* @h: parameter member
* Return: Always 0 (Success)
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	printf("[");
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", h->str);
		}
		count++;
		h = h->next;

		if (h != NULL)
		{
			printf(", ");
		}
	}
	printf("]\n");

	return (count);
}

