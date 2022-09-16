#include "main.h"

/**
 * print_square - Print a square with '#'.
 * @size: The size of the square.
 *
 */
void print_square(int size)
{
	int height, width;

	if (size <= 0)
		_putchar('\n');

	for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');
			_putchar('\n');
		}
	}

	_putchar('\n');
}
