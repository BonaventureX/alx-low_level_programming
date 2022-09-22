#include "main.h"

/**
 * _strcmp - function that compares two strings like strcmp
 * @s1: first string
 * @s2: second string
 *
 * Return: -, 0 or + is s1<s2, s1=s2 or s1>s2 respectively.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
