#include <stdlib.h>
#include "lists.h"

/**
* free_listint - function frees a listint_t list
* @head: parameter member
*
* Return: void function (no return)
*/
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
