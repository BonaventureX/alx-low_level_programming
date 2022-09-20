#include "main.h"

/**
 * puts2 - prints one out of two
 * @str: string to be choosen from
 *
 */

void puts2(char *str)
{
	int len = 0;
	int pick = 0;

	while (str[len] != '\0')
		len++;

	for  (pick = 0; pick < len; pick += 2)
		_putchar(str[pick]);

	_putchar('\n');
}
