#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase in a string
 * @str: string to be changed
 *
 * Return: @str
 */


char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
