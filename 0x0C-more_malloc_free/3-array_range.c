#include <stdlib.h>
#include "main.h"
/**
 * *array_range - a function that creates an array of integers
 * @min: minimum range of values stored in memory
 * @max: maximum range of values and elements stored in memory
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int x, sum;

	if (min > max)
		return (NULL);

	sum = max - min + 1;

	ptr = malloc(sizeof(int) * sum);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		ptr[x] = min++;

	return (ptr);
}
