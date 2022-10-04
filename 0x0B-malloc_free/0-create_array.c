#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars and initializes it wit a char
 *
 * @size: Size of array to be initialized.
 * @c: Specific char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 */


char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
