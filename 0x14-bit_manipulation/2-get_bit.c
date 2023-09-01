#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: pointer to the index
 * @index: the bit to get
 *
 * Return: the value of the bit at index index or -1 an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
