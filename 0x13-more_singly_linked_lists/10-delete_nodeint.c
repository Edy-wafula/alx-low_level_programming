#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to a pointer to the head of the linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if deletion succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *lab = *head;
	listint_t *now = NULL;
	unsigned int x = 0;


	if (head == NULL || *head == NULL)
		return (-1);

	now = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(lab);
		return (1);
	}

	while (x < index - 1)
	{
		if (!lab || !(lab->next))
			return (-1);
		lab = lab->next;
		x++;
	}
	now = lab->next;
	lab->next = now->next;
	free(now);

	return (1);
}
