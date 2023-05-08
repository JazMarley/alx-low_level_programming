#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @a: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *a, char *accept)
{
	unsigned int x = 0;
	int y;

	while (*a)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*a == accept[y])
			{
				x++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (x);
		}
		a++;
	}
	return (x);
}
