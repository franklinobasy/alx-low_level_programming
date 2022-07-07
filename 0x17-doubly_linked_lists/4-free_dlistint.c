#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: head node
 *
 * Return: void
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *remnant;

	if (!head)
		return;

	remnant = head->next;
	while (remnant)
	{
		free(remnant->prev);
		remnant = remnant->next;
	}
}
