#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase in a string
 * @str: string to be changed
 *
 * Return: pointer to the changed string
 *
 */

char *string_toupper(char *)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
