#include "main.h"

/**
 * _strspn - get the length of a prefix sustring
 *
 * @s: string to be searched
 * @accept: the prefix to be measured
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s,char *accept)
{
	int i, num = 0;

	while (*s)
	{
		for (i =0; accept[i]; i++)
		{
			if (*s == accept[i])
				{
					num ++;
					break;
				}

			else if (accept[i] == "\0')
				return(num);
		}

			s++
	}
	
	return (num);
}

