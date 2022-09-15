#include <stdio.h>

/**
 * main - list natural numbers below 1024. !3 or 5
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int i, num = 0;

	for (i = 0; i < 1024; i++)
{
	if ((i % 3) == 0 || (i % 5) == 0)
		num += i;
}

printf("%d\n", num)

return (0);
}
