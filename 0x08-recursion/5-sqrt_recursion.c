#include "main.h"


/**
 * find_sqrt - Finds the natural square root of an inputted number.
 *
 * @num: The number to find the square root of.
 * @itr: iterator
 *
 * Return: If the number has a natural square root - or sq root if the number
 * does not have a natural square root - -1
 */


int find_sqrt(int num, int itr)
{
	if (itr % (num / itr) == 0)
	{
		if (itr * (num / itr) == num)
			return (num);
		else
			return (itr);
	}
	return (find_sqrt(num, itr + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n or
 * sq root if n does not have a natural square root
 *
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (find_sqrt(n, 2));
}
