#include "list.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the linked list
 * @index: index of the node that starts at 0
 *
 * Return: pointer to the node we are looking for, or NULL not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int f = 0;
	listint *vay = head;

	while (head != NULL)
	{
		if (f == index)
			return (head);

		 head = head->next;
		f++;
	}
}
