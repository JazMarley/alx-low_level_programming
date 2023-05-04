#include "main.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string using rot13
 * @p: pointer to the string
 *
 * Return: *p
 */

char *rot13(char *p)
{
	int x;
	int y;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; p[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (p[x] == data1[y])
			{
				p[x] = datarot[y];
				break;
			}
		}
	}
	return (p);
}
