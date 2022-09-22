#include "main.h"

/**
 * _strncat - concatenates two strings similar to _strcat
 * @src: souruce string
 * @dest: the resulting string
 * @n: most bytes from source
 * Return: point to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
