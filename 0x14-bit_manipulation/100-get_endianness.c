#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int j = 1;
	int little_or_big;

	little_or_big = (int) (((char *)&j)[0]);
	return (little_or_big);
}
