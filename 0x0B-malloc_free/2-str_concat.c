#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatebate two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concat string
 */


char *str_concat(char *s1, char *s2)
{
	char *ccs;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	ccs = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (ccs == NULL)
		return (NULL);

	for (k = 0, l = 0; k < (i + j + 1); k++)
	{
		if (k < i)
			ccs[k] = s1[k];
		else
			ccs[k] = s2[l++];
	}

	return (ccs);
}
