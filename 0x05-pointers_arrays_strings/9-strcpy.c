#include "main.h"

/**
 * _strcpy - copies string to buffer including the null byte
 * @dest: destination buffer
 * @src: source
 *
 * Return: A pointer tp the destination buffer
 *
 */

char *_strcpy(char *dest, char *src)
{
	int buf = 0;

	while (src[buf] != '\0')
	{
		dest[buf] = src[buf];
		buf++;
	}

	dest[buf] = '\0';

	return (dest);
}
