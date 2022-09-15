#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: the number of characters
 *
 */

void print_diagonal(int n)
{
	int line, space;

	if (n <= 0)
		_putchar('\n');

	for (line = 0; line < n; line++)
	{
		for (space = 0; space <= line; space++)
		{
			if (line == space)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
