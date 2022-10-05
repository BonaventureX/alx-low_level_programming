#include <stdlib.h>
#include "main.h"


/*
 * _strdup - returns a pointer to a anew string which is a dup
 *
 * @str: string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 * or a pointer to the duplicated string.
 */


char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str:[i]; i++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
