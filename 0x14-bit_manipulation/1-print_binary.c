#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int byt = sizeof(n) * 8, outputed = 0;

	while (byt)
	{
		if (n & 1L << --byt)
		{
			_putchar('1');
			outputed++;
		}
		else if (outputed)
			_putchar('0');
	}
	if (!outputed)
		_putchar('0');
}
