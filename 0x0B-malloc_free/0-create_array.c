#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of
 * chars, and initializes it with a specific char
 * @s: size of array
 * @c: char to assign
 * Description: create array with size s and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int s, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * s);
	if (s == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < s; a++)
		str[a] = c;
	return (str);
}
