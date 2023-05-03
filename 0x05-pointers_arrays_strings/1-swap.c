#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @x: integer to swap
 * @y: integer to swap
 */
void swap_int(int *x, int *y)
{
	int i;

	i = *x;
	*x = *y;
	*y = i;
}
