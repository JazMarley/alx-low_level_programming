#include "main.h"
/**
 * print_array -  function that prints n elements of an array of integers
 * @x: array name
 * @n: number of elements in the array to be printed
 * Return: a and n inputs
 */
void print_array(int *x, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", x[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", x[n - 1]);
		}
			printf("\n");
}
