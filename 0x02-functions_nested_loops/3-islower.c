#include "main.h"

/**
 * _islower - checks for lowercse character
 * 0c: The character to be checked
 * Return: 1 for liowercase character 0 for anything else
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);

}
