#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @a: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *a, char *accept)
{
		int x;

		while (*a)
		{
			for (x = 0; accept[x]; x++)
			{
			if (*a == accept[x])
			return (a);
			}
		a++;
		}

	return ('\0');
}
