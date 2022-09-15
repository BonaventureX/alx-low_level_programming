#include <stdio.h>

/**
 * main - print 50 fibonacci numbers
 *
 * Return: always 0
 *
 */

int main(void)
{
	int count;
	unsigned long num1 = 0, num2 = 1, fib;

	for (count = 0; count < 50; count++)
	{
		fib = num1 + num2;
		printf("%lu", sum);

		num1 = num2;
		num2 = fib;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
