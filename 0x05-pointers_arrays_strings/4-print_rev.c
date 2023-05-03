#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse,
 * @a: string
 * return: 0
 */
void print_rev(char *a)
{
	int longi = 0;
	int x;

	while (*a != '\0')
	{
		longi++;
		a++;
	}
	a--;
	for (x = longi; x > 0; x--)
	{
		_putchar(*a);
		a--;
	}

	_putchar('\n');
}
