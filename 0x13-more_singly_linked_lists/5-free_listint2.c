#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free listint_t.
 * @head: data type pointer the head/next node
 * Return: 0 elements all free
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
