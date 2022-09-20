#include "main.h"

/**
 * _puts - prints string to standard out
 * @str: string to be printed
 *
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
