#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @n: number of values in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
