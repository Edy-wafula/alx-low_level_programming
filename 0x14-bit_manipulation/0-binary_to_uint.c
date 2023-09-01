#include "main.h"

/**
 * binary_to_uint -  a function that converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int vay = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		vay = vay * 2 + (*b++ - '0');
	}
	return (vay);
}
