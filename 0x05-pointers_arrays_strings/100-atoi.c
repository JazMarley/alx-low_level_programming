#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * @a: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *a)
{
	int i, b, n, l, f, d;

	i = 0;
	b = 0;
	n = 0;
	l = 0;
	f = 0;
	d = 0;

	while (a[l] != '\0')
		l++;
	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++b;

		if (a[i] >= '0' && a[i] <= '9')
		{
			d = a[i] - '0';
			if (b % 2)
				d = -d;
			n = n * 10 + d;
			f = 1;
			if (a[i + 1] < '0' || a[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
