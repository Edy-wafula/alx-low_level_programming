#include "main.h"
/*
 *print_rev -  function that prints a string, in reverse
 *@s:the used string reference pointer
 *return: 0
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[sart])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
