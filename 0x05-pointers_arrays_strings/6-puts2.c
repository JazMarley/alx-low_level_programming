#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @a: input
 * Return: print
 */
void puts2(char *a)
{
	int longi = 0;
	int b = 0;
	char *y = a;
	int x;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	b = longi - 1;
	for (x = 0 ; x <= b ; x++)
	{
		if (x % 2 == 0)
	{
		_putchar(a[x]);
	}
	}
	_putchar('\n');
}
