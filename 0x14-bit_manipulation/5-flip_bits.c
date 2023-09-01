#include "main.h"

/**
 * flip_bits -  function that returns the number of bits
 * needed to flip to get from one number to another
 * @n: first number to compare
 * @m: second number to compare
 * Return: the number of bits you would like to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int marked;
	unsigned long int get;

	marked = n ^ m;
	for (get = 0; marked > 0;)
	{
		if ((marked & 1) == 1)
			get++;
		marked = marked >> 1;
	}
	return (get);
}
