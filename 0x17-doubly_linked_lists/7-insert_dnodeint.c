#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer to dlistint head
 * @idx: index of new node
 * @n: number for new node
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	int i = 0;

	if (!h || !new_node)
		return (new_node);

	new_node->n = n;
	if (!(*h))
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (current)
	{
		if (i == (int)idx)
		{
			new_node->prev = current->prev;
			(current->prev)->next = new_node;
			current->prev = new_node;
			new_node->next = current;
			return (new_node);
		}
		else if (!(current->next) && i + 1 == (int)idx)
		{
			return (add_dnodeint_end(h, n));
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
