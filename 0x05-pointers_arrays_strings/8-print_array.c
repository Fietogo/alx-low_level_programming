#include "main.h"

/**
 * print_array - Entry point
 * @a: array
 * @n: number of elements
 * Prototype: void print_array(int *a, int n)
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		(j < n - 1) ? printf(", ") : 0;
	}

	printf('\n');
}
