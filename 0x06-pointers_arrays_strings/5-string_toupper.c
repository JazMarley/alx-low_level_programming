#include "main.h"
/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase
 * @p: pointer value
 * Return: p
 */
char *string_toupper(char *p)
{
	int x;

	x = 0;
	while (p[x] != '\0')
	{
		if (p[x] >= 'a' && p[x] <= 'z')
			p[x] = p[x] - 32;
		x++;
	}
	return (p);
}
