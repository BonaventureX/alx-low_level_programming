#include <stdlib.h>
#include "main.h"


/**
 * _strdup - returns a pointer to a space containing a duplicate
 *
 * @str: string copied
 *
 * Return: pointer of an array of chars
 *
 */

char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	dup = malloc(i * sizeof(*dup) + 1);
	if (dup == NULL)
		return (NULL);

	for (len = 0; len < i; len++)
		dup[len] = str[len];
	dup[len] = '\0';

	return (dup);
}
