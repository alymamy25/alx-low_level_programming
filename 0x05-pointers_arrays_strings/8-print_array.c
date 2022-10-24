#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * @a: array
 * @n: number of to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < (n - 1); t++)
	{
		printf("%d,", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
}
