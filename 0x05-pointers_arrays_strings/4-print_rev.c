#include "main.h"

/**
 * print_rev - print a string in reverse and \n
 * @s: string to be reversed
 *
 */

void print_rev(char *s)
{
	int len = 0, string;

	while (s[string++])
		len++;

	string = len;

	for (string -= 1; string >= 0; string--)
		_putchar(s[string]);

	_putchar('\n');
}
