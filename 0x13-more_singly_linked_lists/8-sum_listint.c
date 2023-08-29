#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a listint_t linked list.
 * @head: pointer to the head of the linked list
 *
 * Return: result sum
 */
int sum_listint(listint_t *head)
{
	int f = 0;

	while (head != NULL)
	{
		f += head->n;
		head = head->next;
	}

	return (f);
}
