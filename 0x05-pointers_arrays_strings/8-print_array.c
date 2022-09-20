#include "main.h"

/**
 * print_array - Prints an inputted number of elements
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 *
 */

void print_array(int *a, int n)
{
	int array;

	for (array = 0; array < n; array++)
	{
		printf("%d", a[array]);

		if (array == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
