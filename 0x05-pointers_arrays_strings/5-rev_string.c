#include "main.h"

/**
 * rev_string - reverse a stirng
 * @s: string to be reversed
 *
 */

void rev_string(char *s)
{
	int len = 0;
	int rev = 0;
	char temp;

	while (s[len] != '\0')
		len++;

	for (rev = len - 1; rev >= len / 2; rev--)
	{
		temp = s[rev];
		s[rev] = s[len - rev - 1];
		s[len - rev - 1] = temp;
	}
}
