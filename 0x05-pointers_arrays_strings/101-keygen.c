#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid passwords
 *for the program 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, num, j;

	num = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		num += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - num) - '0' < 78)
		{
			j = 2772 - num - '0';
			num += j;
			putchar(j + '0');
			break;
		}
	}

	return (0);
}
