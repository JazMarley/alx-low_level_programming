#include "main.h"
/**
 *_memcpy - a function that copies memory area.
 *@src: memory is copied
 *@dest: memory is stored
 *@n: number of bytes
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *src, char *dest, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
