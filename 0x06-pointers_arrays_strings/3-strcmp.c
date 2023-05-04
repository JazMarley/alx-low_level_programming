#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @x: Input integer
 * @y: Input integer
 * Return: x[a] - y[a]
 */
int _strcmp(char *x, char *y)
{
	int a;

	a = 0;
	while (x[a] != '\0' && y[a] != '\0')
	{
		if (x[a] != y[a])
		{
			return (x[a] - y[a]);
		}
		a++;
	}
	return (0);
}
