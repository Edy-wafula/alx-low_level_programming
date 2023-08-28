#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: linked list of type type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{

	size_t kim = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		kim++;
		h = h->next;
	}

	return (kim);
}
