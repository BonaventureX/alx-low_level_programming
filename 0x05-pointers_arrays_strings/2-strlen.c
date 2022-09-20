#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string
 *
 * Return: The length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

