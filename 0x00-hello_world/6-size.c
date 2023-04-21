#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		char a;
		int b;
		long int c;
		long long int d;
		float f;

Printf("Size of a char: %d byte(s)", sizeof(char));
Printf("Size of an int: %d byte(s)", sizeof(int));
Printf("Size of a long int: %d byte(s)", sizeof(long int));
Printf("Size of a long long int: %d byte(s)", sizeof(long long int));
Printf("Size of a float: %d byte(s)", sizeof(float));
return (0);
}
