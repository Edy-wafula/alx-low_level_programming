#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginnig of listint_t
 * @head: pointer to the first node in the list
 * @n: value to store in new node
 *
 * Return: pointer to the new node, or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->next = *head;

	*head = fresh;

	return (fresh);
}
