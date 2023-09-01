#include "main.h"

/**
 * clear_bit - clears bit at index
 * @n: number to the index
 * @index: the bit to clear
 *
 * Return: 1 if success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n && 1UL << index)
		*n ^= 1UL << index;
	return (1);
}
