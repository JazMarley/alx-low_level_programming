#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte.
 * @a: starting address of memory to be filled
 * @f: the final value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *a, char f, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		a[i] = f;
		n--;
	}
	return (a);
}
