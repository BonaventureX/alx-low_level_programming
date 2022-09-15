#include "main.h"
#include <stdio.h>

/**
 * main - arrange the numbers
 * Return: 0 when done
 */

/**
 * print_times_table:  prints times table of the input
 *
 * @n: The number for the times table
 *
 */


int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	print_times_table(98);
	_putchar('\n');
	print_times_table(12);
	return (0);
}

void print_times_table(int n)

	int x, y, z;

	if (n >= 0 && n <= 14)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (z > 99)
				{
				_putchar(',');
				_putchar(32);
				_putchar((z / 100) + '0');
				_putchar(((z / 10) % 10) + '0');
				_putchar((z % 10) + '0');
				}
				else if (z > 9)
				{
				_putchar(',');
				_putchar(32);
				_putchar(32);
				_putchar(((z / 10) % 10) + '0');
				_putchar((z % 10) + '0');
				}
				else
				{
				if (y != 0)
				{_putchar(',');
				_putchar(32);
				_putchar(32);
				_putchar(32);
				}
				_putchar(z + '0');
				}
			}
			_putchar('\n');
		}
	}
}
