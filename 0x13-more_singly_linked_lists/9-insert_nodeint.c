#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to a pointer to the head of the linked list
 * @idx: index of the position where the new node should be added
 * @n: value to store in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int w;
	listint_t *fresh;
	listint_t *first = *head;

	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);

	fresh->n = n;

	if (idx == 0)
	{
		fresh->next = *head;
		*head = fresh;
		return (fresh);
	}

	for (w = 0; first && w < idx; w++)
	{
		if (w == idx - 1)
		{
			fresh->next = first->next;
			first->next = fresh;
			return (fresh);
		}
		else
			first = first->next;
	}

	return (NULL);
}
