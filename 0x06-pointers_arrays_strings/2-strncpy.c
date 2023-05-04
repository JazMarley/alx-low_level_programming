#include "main.h"
/**
 * _strncpy - function that copies a string
 * Your function should work exactly like strncpy
 * @dest: Input integer
 * @src: Input integer
 * @i: Input integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int i)
{
	int a;

	a = 0;
	while (a < i && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < i)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
