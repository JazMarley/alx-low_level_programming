#include "main.h"
/**
 * _puts - function to print a string, followed by a new line
 * @a: string to print
 */
void _puts(char *a)
{
	while (*a != '\0')
	{
		_putchar(*a++);
	}
		_putchar('\n');
}
