#include "main.h"

/**
 * _isupper - check for uppercase like in ctyp library
 * @c: The cahracter to be checked
 *
 * Return: 1 if character is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
