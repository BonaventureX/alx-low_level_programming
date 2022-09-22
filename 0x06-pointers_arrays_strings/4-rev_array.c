#include "main.h"

/**
 * reverse_array - reverse an array's comntents
 * @a: array to be reversed
 * @n: number of elements in array
 *
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
