#include <stdio.h>

/**
 * main - print sum of even valued fi sequence
 *
 * Return: always 0
 */

int mani(void)
{
	unsigned long num1 = 0, num2 = 1, fibsum;
	float total;

	while (1)
	{
		fibsum = num1 + num2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			total += fibsum;

		num1 = num2;
		num2 = fibsum;
	}
	printf("%.0f\n", total);

	return (0);
}
