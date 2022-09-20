#include "main.h"

/**
 * print_rev - print a string in reverse and \n
 * @s: string to be reversed
 *
 */

void print_rev(char *s)
{
	int len = 0;

	while (len; s[len] != '\0')
		len++;

	for (len -= 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
