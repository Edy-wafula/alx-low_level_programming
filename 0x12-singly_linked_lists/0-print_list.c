#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of list_t list.
 * @h: list of list_t.
 *
 * Return: number of count in h
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		count++;
		h = h->next;
	}
	return (count);
}
