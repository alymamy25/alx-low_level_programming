#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: int 1
 * @b: int 2
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
