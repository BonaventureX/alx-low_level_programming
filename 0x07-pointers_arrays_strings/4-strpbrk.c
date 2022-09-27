#include "main.h"

/**
 * _strpbrk - searches for set of bytes in string
 *
 * @s: strung to search
 * @accept: The set of bytes searched for
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
